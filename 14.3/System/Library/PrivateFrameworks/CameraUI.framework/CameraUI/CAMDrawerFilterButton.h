@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;

- (void)updateImage;
- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)isSelfExpanding;

@end
