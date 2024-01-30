@class NSString;

@interface SharedDefaults : NSObject

@property (class, readonly, nonatomic) NSString *measureUnits;

@property long long cachedMeasureUnits;

+ (id)defaults;
+ (id)getDefaultValues;
+ (void)setupSpecifier:(id)a0;
+ (long long)currentMeasureUnits;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
