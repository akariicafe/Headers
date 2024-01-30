@interface CAMPortraitModeInstructionLabel : CAMInstructionLabel

@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (nonatomic) long long flashMode;
@property (nonatomic) unsigned long long numberOfPeopleFound;
@property (nonatomic) long long devicePosition;
@property (nonatomic) long long lightingType;
@property (nonatomic) long long lowLightStatus;
@property (nonatomic) long long lowLightMode;

+ (BOOL)shouldDisplayInstructionForShallowDepthOfFieldStatus:(long long)a0;
+ (id)_textForShallowDepthOfFieldStatus:(long long)a0 numberOfPeopleFound:(unsigned long long)a1 flashMode:(long long)a2 devicePosition:(long long)a3 lightingType:(long long)a4 lowlightMode:(long long)a5 lowLightStatus:(long long)a6;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextWithPriorStatus:(long long)a0;

@end
