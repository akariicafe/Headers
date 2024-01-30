@class UIColor;

@interface _UIBarBackgroundLayoutPrototyping : _UIBarBackgroundLayout {
    UIColor *_colorWash;
}

+ (void)registerPrototypingCallback:(id /* block */)a0;
+ (id)prototypingLayoutForBarType:(long long)a0;
+ (BOOL)prototypingEnabled;

- (id)bg1Effects;
- (id)bg1Color;
- (BOOL)shouldUseExplicitGeometry;
- (id)bg1ShadowColor;
- (BOOL)bg1HasShadow;
- (void)describeInto:(id)a0;
- (void).cxx_destruct;

@end
