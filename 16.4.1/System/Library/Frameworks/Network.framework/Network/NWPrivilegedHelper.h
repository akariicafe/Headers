@class NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NWPrivilegedHelper : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (retain) NSMutableDictionary *handlers;
@property (retain) NSMutableSet *allKnownEntitlementSet;
@property (retain) NSMutableArray *allKnownEntitlementGroup;

- (void)registerHandlerFunction:(void /* function */ *)a0 type:(int)a1 allowedEntitlementGroup:(id)a2;
- (void)startThrottlePolicyEventListener;
- (void)handleRequest:(id)a0 onConnection:(id)a1;
- (void)registerHelperFunctions;
- (BOOL)startXPCListener;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
