@class NSDictionary;

@interface VUIJSAMSBagInterface : VUIJSObject <VUIJSAMSBagDelegate>

@property (readonly, nonatomic) NSDictionary *VUIAMSBagValueTypes;

+ (id)generateResponseDictionary:(id)a0 withError:(id)a1;
+ (id)convertNSErrorIntoDict:(id)a0;

- (id)dictionaryForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)boolForKey:(id)a0;
- (void)registerBagKey:(id)a0 withValueType:(unsigned long long)a1;
- (void)arrayForKeyWithCompletion:(id)a0 :(id)a1;
- (void)boolForKeyWithCompletion:(id)a0 :(id)a1;
- (void)doubleForKeyWithCompletion:(id)a0 :(id)a1;
- (void)integerForKeyWithCompletion:(id)a0 :(id)a1;
- (void)stringForKeyWithCompletion:(id)a0 :(id)a1;
- (void)URLForKeyWithCompletion:(id)a0 :(id)a1;
- (void)dictionaryForKeyWithCompletion:(id)a0 :(id)a1;

@end
