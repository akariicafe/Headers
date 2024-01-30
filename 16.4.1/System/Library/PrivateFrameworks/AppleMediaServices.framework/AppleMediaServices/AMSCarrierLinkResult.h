@class NSString, NSDictionary, NSError, NSNumber, AMSCarrierLinkParams;

@interface AMSCarrierLinkResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *response;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSString *channelCustomerId;
@property (readonly, nonatomic) AMSCarrierLinkParams *linkParams;
@property (readonly, nonatomic) NSString *productCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 linkParams:(id)a1;

@end
