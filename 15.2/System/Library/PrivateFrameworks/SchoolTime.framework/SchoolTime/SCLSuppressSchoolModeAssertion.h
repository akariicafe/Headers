@class NSString, NSUUID, NSXPCConnection;

@interface SCLSuppressSchoolModeAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_UUID;
    NSXPCConnection *_connection;
    unsigned long long _state;
}

@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)connectionInvalidated;
- (id)initWithExplanation:(id)a0;
- (BOOL)acquireWithError:(out id *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)acquireWithInvalidationHandler:(id /* block */)a0;
- (void)invalidate;

@end
