@class NSString, NSDictionary, NSError, NSNumber, AMSCarrierLinkParams;

@interface AMSCarrierLinkResult : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *response;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSString *channelCustomerId;
@property (readonly, nonatomic) AMSCarrierLinkParams *linkParams;
@property (readonly, nonatomic) NSString *productCode;

- (id)initWithResponse:(id)a0 linkParams:(id)a1;
- (void).cxx_destruct;

@end
