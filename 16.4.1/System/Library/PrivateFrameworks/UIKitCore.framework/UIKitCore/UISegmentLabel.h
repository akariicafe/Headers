@class UILabel;

@interface UISegmentLabel : UILabel

@property (weak, nonatomic) UILabel *associatedLabel;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_associatedScalingLabel;
- (id)_parentSegment;
- (id)init;
- (id)_disabledFontColor;
- (void).cxx_destruct;

@end
