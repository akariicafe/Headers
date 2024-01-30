@class NSArray, NSString;

@interface UISPasteVariant : NSObject

@property (class, readonly, nonatomic) NSArray *allVariants;

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSString *localizationKey;
@property (readonly, nonatomic) NSString *glyph;
@property (readonly, nonatomic) NSString *keyInput;
@property (readonly, nonatomic) long long keyModifierFlags;

+ (id)variantForActionIdentifier:(id)a0;
+ (id)_bundle;
+ (id)variantForSelector:(SEL)a0;
+ (id)variantForIndex:(unsigned long long)a0;

- (id)initWithIndex:(unsigned long long)a0 selector:(SEL)a1 actionIdentifier:(id)a2 localizationKey:(id)a3 glpyh:(id)a4 keyInput:(id)a5 keyModifierFlags:(long long)a6;
- (id)localizedStringForLocalization:(id)a0;
- (void).cxx_destruct;

@end
