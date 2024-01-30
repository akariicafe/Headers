@interface HMMutableHomePersonManagerSettings : HMHomePersonManagerSettings

@property (getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(BOOL)a0;

@end
