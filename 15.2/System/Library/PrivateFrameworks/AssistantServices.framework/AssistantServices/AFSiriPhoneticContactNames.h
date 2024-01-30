@class NSString;

@interface AFSiriPhoneticContactNames : NSObject

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *languageCode;

- (void).cxx_destruct;
- (id)spokenName;

@end
