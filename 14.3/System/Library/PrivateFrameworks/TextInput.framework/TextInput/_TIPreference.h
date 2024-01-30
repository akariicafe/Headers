@class NSString;

@interface _TIPreference : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *fallbackKey;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) id currentValue;

+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3;
+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2;

- (void).cxx_destruct;

@end
