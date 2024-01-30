@class NSDictionary, NSString;

@interface AMSCarrierLinkParams : NSObject

@property (retain, nonatomic) NSDictionary *fields;
@property (readonly, nonatomic) NSString *adamId;
@property (readonly, nonatomic) NSString *linkParamsString;

+ (id)_queryDictionaryFromString:(id)a0;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;

@end
