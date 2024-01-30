@class UIBarButtonItem;

@interface _UIButtonBarTargetAction : NSObject

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (copy, nonatomic) id /* block */ actionFilter;
@property (readonly, nonatomic) SEL proxyAction;

- (id)init;
- (void).cxx_destruct;
- (void)_invoke:(id)a0 forEvent:(id)a1;
- (id)initWithBarButtonItem:(id)a0;

@end
