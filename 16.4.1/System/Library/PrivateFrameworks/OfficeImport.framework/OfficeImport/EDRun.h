@class NSString, EDResources, NSArray;

@interface EDRun : NSObject <EDKeyedObject> {
    EDResources *mResources;
    unsigned long long mCharIndex;
    unsigned long long mFontIndex;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runWithCharIndex:(unsigned long long)a0 font:(id)a1 effects:(id)a2 resources:(id)a3;
+ (id)runWithCharIndex:(unsigned long long)a0 font:(id)a1 resources:(id)a2;
+ (id)runWithCharIndex:(unsigned long long)a0 fontIndex:(unsigned long long)a1 effects:(id)a2 resources:(id)a3;
+ (id)runWithCharIndex:(unsigned long long)a0 fontIndex:(unsigned long long)a1 resources:(id)a2;
+ (id)runWithResources:(id)a0;

- (long long)key;
- (id)effects;
- (void)setFontIndex:(unsigned long long)a0;
- (id)font;
- (void)setFont:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)fontIndex;
- (void).cxx_destruct;
- (unsigned long long)charIndex;
- (void)setCharIndex:(unsigned long long)a0;
- (id)initWithResources:(id)a0;
- (void)adjustIndex:(unsigned long long)a0;
- (id)initWithCharIndex:(unsigned long long)a0 font:(id)a1 effects:(id)a2 resources:(id)a3;
- (id)initWithCharIndex:(unsigned long long)a0 font:(id)a1 resources:(id)a2;
- (id)initWithCharIndex:(unsigned long long)a0 fontIndex:(unsigned long long)a1 effects:(id)a2 resources:(id)a3;
- (id)initWithCharIndex:(unsigned long long)a0 fontIndex:(unsigned long long)a1 resources:(id)a2;
- (BOOL)isEqualToRun:(id)a0;
- (void)overrideFont:(id)a0;

@end
