@class NSMutableDictionary;

@interface HMMTagHandlersManager : NSObject {
    NSMutableDictionary *_handlers;
}

- (void).cxx_destruct;
- (id)init;
- (void)addHandler:(id /* block */)a0 forTagName:(id)a1;
- (id)handlersForTagName:(id)a0;

@end
