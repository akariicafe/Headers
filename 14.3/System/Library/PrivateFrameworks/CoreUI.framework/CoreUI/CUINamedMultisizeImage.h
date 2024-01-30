@interface CUINamedMultisizeImage : CUINamedImage

@property (nonatomic) struct CGSize { double width; double height; } nextSizeSmaller;

- (id)debugDescription;

@end
