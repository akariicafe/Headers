@class UIColor;

@interface DOCTagPickerAppearance : NSObject

@property (readonly) BOOL useDashedBorderForAddNewTag;
@property (readonly) BOOL showLeadingDotWhileEditing;
@property (readonly) UIColor *cellBackgroundColor;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } cellExternalMargins;
@property (readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } cellInteriorLayoutMargins;
@property (readonly) double dotSize;
@property (readonly) double cornerRadius;

@end
