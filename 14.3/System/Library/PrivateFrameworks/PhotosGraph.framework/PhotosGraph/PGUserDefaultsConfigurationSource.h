@class NSString, NSUserDefaults;

@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource>

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;

@end
