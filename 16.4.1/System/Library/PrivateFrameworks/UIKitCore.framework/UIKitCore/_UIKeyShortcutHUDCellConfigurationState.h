@interface _UIKeyShortcutHUDCellConfigurationState : UICellConfigurationState

@property (nonatomic, getter=isFlashing) BOOL flashing;
@property (nonatomic, getter=isCategoryVisible) BOOL categoryVisible;
@property (nonatomic) BOOL drawsBackground;

- (id)initWithCellConfigurationState:(id)a0;

@end
