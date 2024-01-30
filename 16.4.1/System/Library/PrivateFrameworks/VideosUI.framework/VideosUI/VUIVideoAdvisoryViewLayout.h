@class UIColor, VUITextLayout;

@interface VUIVideoAdvisoryViewLayout : TVViewLayout

@property (nonatomic) struct CGSize { double width; double height; } logoSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } logoMargin;
@property (nonatomic) struct CGSize { double width; double height; } legendSize;
@property (nonatomic) double legendMaxWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } legendsMargin;
@property (nonatomic) double legendNameMinWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } legendNamePadding;
@property (readonly, nonatomic) UIColor *legendBackgroundColor;
@property (nonatomic) double legendCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } dividerMargin;
@property (nonatomic) struct CGSize { double width; double height; } dividerSize;
@property (readonly, nonatomic) UIColor *dividerColor;
@property (readonly, nonatomic) VUITextLayout *legendLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionLayout;
@property (nonatomic) double descriptionMaxWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } descriptionMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitMargin;
@property (nonatomic) struct CGSize { double width; double height; } portraitLogoSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitLogoMargin;
@property (nonatomic) struct CGSize { double width; double height; } portraitLegendSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitLegendsMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitDividerMargin;
@property (nonatomic) struct CGSize { double width; double height; } portraitDividerSize;
@property (readonly, nonatomic) VUITextLayout *portraitLegendLayout;
@property (readonly, nonatomic) VUITextLayout *portraitLegendDescriptionLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitDescriptionMargin;

- (id)init;
- (void).cxx_destruct;

@end
