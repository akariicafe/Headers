@class NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}

- (id)initWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_connectToGeod;
- (void)dealloc;
- (id)debugDescription;

@end
