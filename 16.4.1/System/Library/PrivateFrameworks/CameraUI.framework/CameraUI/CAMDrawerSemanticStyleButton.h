@class CAMSemanticStyle;

@interface CAMDrawerSemanticStyleButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (retain, nonatomic, setter=setSemanticStyle:) CAMSemanticStyle *semanticStyle;

- (id)imageNameForCurrentState;
- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (long long)controlType;
- (void).cxx_destruct;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
