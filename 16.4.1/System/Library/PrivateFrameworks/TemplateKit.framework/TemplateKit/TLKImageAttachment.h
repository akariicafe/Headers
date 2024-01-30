@interface TLKImageAttachment : NSTextAttachment

@property (nonatomic) struct CGSize { double width; double height; } size;
@property BOOL isPlaceholder;

@end
