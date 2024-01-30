@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BNBannerHostMonitor : NSObject {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic, getter=_connection, setter=_setConnection:) BSServiceConnection *connection;
@property (nonatomic, getter=isActive, setter=_setActive:) BOOL active;

+ (void)initialize;

- (void)deactivate;
- (id)initWithMachName:(id)a0;
- (void)dealloc;
- (void)_invalidateConnection;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (id)_activeConnection;

@end
