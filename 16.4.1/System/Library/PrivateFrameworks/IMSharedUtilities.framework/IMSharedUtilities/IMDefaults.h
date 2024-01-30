@interface IMDefaults : NSObject

+ (id)sharedInstance;

- (void)setBool:(BOOL)a0 forDomain:(id)a1 forKey:(id)a2;
- (BOOL)getBoolFromDomain:(id)a0 forKey:(id)a1 defaultValue:(BOOL)a2;
- (BOOL)getBoolFromDomain:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forDomain:(id)a1 forKey:(id)a2;
- (id)getValueFromDomain:(id)a0 forKey:(id)a1;

@end
