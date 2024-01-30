@interface UIViewBlockBasedCAAction : NSObject <CAAction> {
    id /* block */ _block;
}

- (id)initWithEmptyBlock:(id /* block */)a0;
- (id)initWithActionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;

@end
