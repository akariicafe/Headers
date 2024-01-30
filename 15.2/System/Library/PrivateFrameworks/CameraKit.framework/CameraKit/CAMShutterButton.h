@interface CAMShutterButton : CMKShutterButton

@property (nonatomic) long long mode;

+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x0; double x1; double x2; double x3; })a0;

- (void)setMode:(long long)a0 animated:(BOOL)a1;
- (long long)mode;

@end
