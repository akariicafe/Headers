@interface _PXDisplayLinkWeakReference : NSObject

@property (readonly, weak, nonatomic) id object;
@property (readonly, nonatomic) SEL selector;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 selector:(SEL)a1;
- (void)handleDisplayLink:(id)a0;

@end
