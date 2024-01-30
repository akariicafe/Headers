@class NSMutableDictionary, NSXPCConnection, NSURL, NSString;

@interface ISStore : NSObject

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSURL *storeURL;
@property (readonly) NSMutableDictionary *registry;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } registryLock;
@property (readonly) NSString *domain;

- (id)initWithURL:(id)a0;
- (BOOL)writeStoreUnit:(id)a0;
- (id)unitForUUID:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeUnitForUUID:(id)a0;
- (id)addUnitWithData:(id)a0;

@end
