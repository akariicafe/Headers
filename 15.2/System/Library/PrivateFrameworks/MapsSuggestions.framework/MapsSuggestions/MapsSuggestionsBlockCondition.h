@class NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBlockCondition : MapsSuggestionsBaseCondition {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (BOOL)isTrue;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (id)initWithName:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
