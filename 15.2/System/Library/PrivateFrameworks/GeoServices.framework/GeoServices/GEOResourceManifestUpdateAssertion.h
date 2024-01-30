@class NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    NSObject<OS_xpc_object> *_connection;
    int _notifyToken;
}

- (void).cxx_destruct;
- (void)_connectToGeod;
- (id)init;
- (void)dealloc;
- (id)initWithReason:(id)a0;
- (id)debugDescription;

@end
