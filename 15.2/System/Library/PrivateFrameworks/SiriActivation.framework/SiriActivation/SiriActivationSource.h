@class NSString, BSServiceConnection;

@interface SiriActivationSource : NSObject {
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _active;
    BOOL _knowsIfActive;
}

@property (retain, nonatomic) NSString *identifier;

- (BOOL)isEnabled;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (oneway void)activeChangedTo:(id)a0;

@end
