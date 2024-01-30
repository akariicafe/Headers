@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSChronoEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)initWithMachServiceName:(id)a0;
- (void)_invalidateConnection;
- (id)_activeConnection;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)dealloc;

@end
