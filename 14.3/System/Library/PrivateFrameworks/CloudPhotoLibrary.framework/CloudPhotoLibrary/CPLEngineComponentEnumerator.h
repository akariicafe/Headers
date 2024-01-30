@class NSEnumerator;

@interface CPLEngineComponentEnumerator : NSObject {
    NSEnumerator *_enumerator;
    id /* block */ _handler;
}

- (void).cxx_destruct;
- (id)initWithComponents:(id)a0 handler:(id /* block */)a1;
- (void)nextComponent;

@end
