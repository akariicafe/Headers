@class NSString, NSDictionary;

@interface CRKToolCommandUserInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (id)appVersion;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0;

@end
