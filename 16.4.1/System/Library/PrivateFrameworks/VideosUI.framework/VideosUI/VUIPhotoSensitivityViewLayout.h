@class UIColor, VUITextLayout;

@interface VUIPhotoSensitivityViewLayout : TVViewLayout

@property (nonatomic) struct CGSize { double width; double height; } logoSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } logoMargin;
@property (nonatomic) double descriptionWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } descriptionMargin;
@property (nonatomic) double descriptionCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } dividerMargin;
@property (nonatomic) struct CGSize { double width; double height; } dividerSize;
@property (readonly, nonatomic) UIColor *dividerColor;
@property (readonly, nonatomic) VUITextLayout *descriptionLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitMargin;
@property (nonatomic) struct CGSize { double width; double height; } portraitLogoSize;
@property (nonatomic) double portraitDescriptionWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitLogoMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitDescriptionMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitDividerMargin;
@property (nonatomic) struct CGSize { double width; double height; } portraitDividerSize;
@property (readonly, nonatomic) VUITextLayout *portraitDescriptionLayout;

- (id)init;
- (void).cxx_destruct;

@end
