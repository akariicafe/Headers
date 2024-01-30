@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)deactivate;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (void)_invalidateConnection;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (id)_activeConnection;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;

@end
