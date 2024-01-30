@class NSString;

@interface SQProfile : NSObject

@property (copy, nonatomic) NSString *partnerName;
@property (copy, nonatomic) NSString *token;

+ (id)profileWithPartnerName:(id)a0 token:(id)a1;

- (void).cxx_destruct;

@end
