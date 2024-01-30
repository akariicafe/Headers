@class NSString;

@interface _TIPreference : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *fallbackKey;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) id currentValue;
@property (nonatomic) BOOL isAnalyzed;
@property (readonly, nonatomic) NSString *previousValueKey;
@property (readonly, nonatomic) NSString *changedAtKey;
@property (readonly, nonatomic) NSString *analyzedAtKey;
@property (readonly, nonatomic) NSString *buildAtChangeKey;

+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3 isAnalyzed:(BOOL)a4;
+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2;
+ (id)preferenceWithKey:(id)a0 domain:(id)a1 defaultValue:(id)a2 fallbackKey:(id)a3;

- (void).cxx_destruct;

@end
