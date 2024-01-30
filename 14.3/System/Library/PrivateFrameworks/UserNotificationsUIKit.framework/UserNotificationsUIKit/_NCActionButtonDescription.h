@class NSString;

@interface _NCActionButtonDescription : NSObject {
    NSString *_selectorString;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic, getter=isDefaultActionButton) BOOL defaultActionButton;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 selector:(SEL)a1 defaultActionButton:(BOOL)a2;

@end
