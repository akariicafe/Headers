@class HIDEventSystemClient, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CLHidEventManagerDelegate;

@interface CLHidEventManager : NSObject

@property (nonatomic) id<CLHidEventManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) HIDEventSystemClient *manager;
@property (retain, nonatomic) NSMutableArray *matching;

- (void)dealloc;
- (id)initWithDelegate:(id)a0 queue:(id)a1 matching:(id)a2 type:(long long)a3;

@end
