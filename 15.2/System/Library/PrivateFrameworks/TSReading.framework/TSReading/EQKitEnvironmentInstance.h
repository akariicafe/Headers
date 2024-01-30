@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {
    NSDictionary *mConfig;
    void *mOperatorDictionary;
    struct Manager { void /* function */ **x0; struct Collection *x1; struct EQKitCacheLRUCounter { unsigned long long x0; } x2; } *mFontManager;
    void *mKerningManager;
    struct Config { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *mLayoutConfig;
}

@property (nonatomic) BOOL kerning;

+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)a0;
+ (id)dataForEnvironment:(id)a0;

- (const struct Manager { void /* function */ **x0; struct Collection *x1; struct EQKitCacheLRUCounter { unsigned long long x0; } x2; } *)fontManager;
- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void)endLayout;
- (void)beginLayout;
- (const void *)kerningManager;
- (const struct Config { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)layoutConfig;
- (const void *)operatorDictionary;
- (id)newDictionaryForArchiving;

@end
