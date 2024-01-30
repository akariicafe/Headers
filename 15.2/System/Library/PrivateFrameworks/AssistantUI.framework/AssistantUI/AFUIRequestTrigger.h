@class SASRequestOptions, NSMapTable;

@interface AFUIRequestTrigger : NSObject {
    NSMapTable *_observers;
}

@property (readonly, nonatomic) SASRequestOptions *options;
@property (readonly, nonatomic) long long state;

- (void)_updateState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithRequestOptions:(id)a0 updateHandle:(id /* block */ *)a1;
- (void)addTriggerTarget:(id)a0 action:(SEL)a1;
- (void)removeTriggerTarget:(id)a0;

@end
