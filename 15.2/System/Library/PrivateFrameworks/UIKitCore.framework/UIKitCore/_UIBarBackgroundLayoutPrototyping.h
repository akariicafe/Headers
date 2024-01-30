@class UIColor;

@interface _UIBarBackgroundLayoutPrototyping : _UIBarBackgroundLayout {
    UIColor *_colorWash;
}

+ (void)registerPrototypingCallback:(id /* block */)a0;
+ (BOOL)prototypingEnabled;
+ (id)prototypingLayoutForBarType:(long long)a0;

- (id)bg1Color;
- (BOOL)bg1HasShadow;
- (id)bg1Effects;
- (BOOL)shouldUseExplicitGeometry;
- (id)bg1ShadowColor;
- (void)describeInto:(id)a0;
- (void).cxx_destruct;

@end
