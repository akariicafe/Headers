@class NSString;

@interface AFSiriPhoneticContactNames : NSObject

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *languageCode;

- (id)spokenName;
- (void).cxx_destruct;

@end
