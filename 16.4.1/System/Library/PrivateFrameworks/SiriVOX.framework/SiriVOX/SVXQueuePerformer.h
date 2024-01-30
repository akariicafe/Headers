@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SVXQueuePerformer : NSObject <SVXPerforming> {
    NSString *_identifier;
    unsigned long long _options;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMainQueuePerformer;

- (void)performBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 queue:(id)a1 options:(unsigned long long)a2;
- (BOOL)_isExecutingInContext;
- (void)_performBlock:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (void)_performBlockSync:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 qosClass:(unsigned int)a1 relativePriority:(int)a2 options:(unsigned long long)a3;
- (void)performBlock:(id /* block */)a0 afterGroup:(id)a1;
- (void)performBlock:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (void)performBlockSync:(id /* block */)a0;

@end
