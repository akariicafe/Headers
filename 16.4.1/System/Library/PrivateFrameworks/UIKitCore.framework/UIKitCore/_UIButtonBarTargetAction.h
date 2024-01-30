@class UIBarButtonItem;

@interface _UIButtonBarTargetAction : NSObject

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (copy, nonatomic) id /* block */ actionFilter;
@property (readonly, nonatomic) SEL proxyAction;

- (id)init;
- (id)initWithBarButtonItem:(id)a0;
- (void)_invoke:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;

@end
