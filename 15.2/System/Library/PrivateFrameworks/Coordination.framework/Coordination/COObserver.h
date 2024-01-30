@class NSOperationQueue, NSString;
@protocol COObservable;

@interface COObserver : NSObject

@property (readonly, nonatomic) id<COObservable> observable;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, copy, nonatomic) NSString *name;

- (void)notify:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initForName:(id)a0 onObservable:(id)a1 handler:(id /* block */)a2 queue:(id)a3;

@end
