@class UIColor, NSString, IKViewElement, NSArray, IKImageElement;

@interface VUIPopoverDescriptor : NSObject {
    IKImageElement *_imageElement;
}

@property (readonly, nonatomic) IKViewElement *buttonElement;
@property (readonly, nonatomic) IKViewElement *popoverElement;
@property (readonly, nonatomic) struct CGSize { double width; double height; } popoverSize;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *popoverEntries;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
