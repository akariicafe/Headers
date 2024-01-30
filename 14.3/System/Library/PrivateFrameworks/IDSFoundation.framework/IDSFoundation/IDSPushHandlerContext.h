@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface IDSPushHandlerContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSSet *topics;
@property (copy, nonatomic) NSSet *commands;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 topics:(id)a1 commands:(id)a2;

@end
