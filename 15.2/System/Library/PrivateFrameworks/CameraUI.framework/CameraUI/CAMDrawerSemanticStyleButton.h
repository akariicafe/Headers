@class CAMSemanticStyle;

@interface CAMDrawerSemanticStyleButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (retain, nonatomic, setter=setSemanticStyle:) CAMSemanticStyle *semanticStyle;

- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end
