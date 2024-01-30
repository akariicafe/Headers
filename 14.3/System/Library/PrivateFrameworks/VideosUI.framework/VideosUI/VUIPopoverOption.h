@class IKTextElement, IKImageElement, IKViewElement, TVImageProxy, UIColor;

@interface VUIPopoverOption : NSObject

@property (readonly, nonatomic) IKViewElement *cardElement;
@property (readonly, nonatomic) IKImageElement *imageElement;
@property (readonly, nonatomic) TVImageProxy *imageProxy;
@property (readonly, nonatomic) IKViewElement *optionElement;
@property (readonly, nonatomic) IKTextElement *titleElement;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) UIColor *highlightColor;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
