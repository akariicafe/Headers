@class NSString, NSDictionary;

@interface CATContext : NSObject

@property (retain, nonatomic) NSString *siriLocale;
@property (retain, nonatomic) NSString *siriVoiceGender;
@property BOOL isMultiUserEnabled;
@property BOOL requiresUserGrounding;
@property unsigned int randomSeed;
@property long long currentTime;
@property (retain, nonatomic) NSDictionary *userSettings;

- (id)toDictionary;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInputLocale:(id)a0 outputVoiceLocale:(id)a1;

@end
