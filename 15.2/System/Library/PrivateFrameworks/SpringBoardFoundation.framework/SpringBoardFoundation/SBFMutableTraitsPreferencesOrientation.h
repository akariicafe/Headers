@interface SBFMutableTraitsPreferencesOrientation : SBFTraitsPreferencesOrientation

@property (nonatomic) unsigned long long supportedOrientations;
@property (nonatomic) long long preferredOrientation;
@property (nonatomic) BOOL canDetermineActiveOrientation;

- (void)setPreferredOrientation:(long long)a0;
- (void)setCanDetermineActiveOrientation:(BOOL)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSupportedOrientations:(unsigned long long)a0;

@end
