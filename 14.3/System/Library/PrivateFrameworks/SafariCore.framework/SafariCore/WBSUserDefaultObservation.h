@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation> {
    NSUserDefaults *_defaults;
    id /* block */ _handler;
    NSString *_key;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0 key:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)invalidate;

@end
