@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic, getter=isTapDissmissable) BOOL tapDissmissable;

@end
