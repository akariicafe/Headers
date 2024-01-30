@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BNBannerHostMonitor : NSObject {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic, getter=_connection, setter=_setConnection:) BSServiceConnection *connection;
@property (nonatomic, getter=isActive, setter=_setActive:) BOOL active;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)dealloc;
- (id)description;
- (void)activate;
- (id)_activeConnection;
- (void)deactivate;
- (id)initWithMachName:(id)a0;

@end
