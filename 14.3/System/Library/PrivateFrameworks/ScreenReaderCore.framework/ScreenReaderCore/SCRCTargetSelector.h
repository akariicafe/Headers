@interface SCRCTargetSelector : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

+ (id)targetSelectorWithTarget:(id)a0 selector:(SEL)a1;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
