@class IKTextElement, IKImageElement, IKViewElement, TVImageProxy, NSArray, UIColor;

@interface VUIPopoverGroup : NSObject

@property (readonly, nonatomic) IKViewElement *groupElement;
@property (readonly, nonatomic) IKImageElement *downImageElement;
@property (readonly, nonatomic) IKImageElement *upImageElement;
@property (readonly, nonatomic) IKTextElement *titleElement;
@property (readonly, nonatomic) TVImageProxy *downImageProxy;
@property (readonly, nonatomic) TVImageProxy *upImageProxy;
@property (readonly, copy, nonatomic) NSArray *groupOptions;
@property (readonly, nonatomic) UIColor *highlightColor;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
