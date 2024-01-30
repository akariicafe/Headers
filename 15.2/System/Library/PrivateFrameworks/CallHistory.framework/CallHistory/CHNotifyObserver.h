@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CHNotifyObserver : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int token;
@property (readonly, copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 queue:(id)a1 callback:(id /* block */)a2;

@end
