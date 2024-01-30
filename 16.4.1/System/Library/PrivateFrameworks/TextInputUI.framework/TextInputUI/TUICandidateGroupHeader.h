@class UILabel, NSString;
@protocol TUICandidateViewStyle;

@interface TUICandidateGroupHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } virtualLabelContainerFrame;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (nonatomic) double rowHeight;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateGroupHeaderLabelPosition;

@end
