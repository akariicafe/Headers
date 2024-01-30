@class UIBarButtonItem, UIView;

@interface VUIDocumentUIConfigurationPopover : VUIDocumentUIConfigurationModal

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) unsigned long long popOverArrowDirection;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem;
@property (nonatomic, getter=isPresentationAdjustedToSizeClass) BOOL presentationAdjustedToSizeClass;

- (void).cxx_destruct;

@end
