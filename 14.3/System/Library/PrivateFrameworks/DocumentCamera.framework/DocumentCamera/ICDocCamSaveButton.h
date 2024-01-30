@class UILabel, NSMutableArray;

@interface ICDocCamSaveButton : UIButton

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *saveLabel;
@property (retain, nonatomic) NSMutableArray *layoutConstraints;
@property (nonatomic) long long documentCount;
@property (nonatomic) long long maxWidthForPortraitIPhone;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)accessibilityUserInputLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityHint;
- (id)saveButtonCountStringForDocumentCount:(unsigned long long)a0;
- (id)saveButtonTitleForDocumentCount:(unsigned long long)a0;

@end
