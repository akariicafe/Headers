@interface XBMutableStatusBarSettings : XBStatusBarSettings

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) long long style;
@property (nonatomic, getter=isBackgroundActivityEnabled) BOOL backgroundActivityEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHidden:(BOOL)a0;
- (void)setBackgroundActivityEnabled:(BOOL)a0;
- (void)setStyle:(long long)a0;

@end
