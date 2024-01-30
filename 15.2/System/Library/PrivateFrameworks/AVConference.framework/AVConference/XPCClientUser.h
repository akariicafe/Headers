@class NSObject;
@protocol OS_dispatch_queue;

@interface XPCClientUser : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) int eventLogLevel;

- (id)init;
- (void)dealloc;

@end
