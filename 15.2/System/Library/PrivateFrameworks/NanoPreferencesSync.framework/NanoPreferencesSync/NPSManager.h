@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NPSManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (void)initialize;
+ (BOOL)supportsWatch;

- (void)synchronizeUserDefaultsDomain:(id)a0 keys:(id)a1 container:(id)a2;
- (void)synchronizeUserDefaultsDomain:(id)a0 keys:(id)a1;
- (void)synchronizeUserDefaultsDomain:(id)a0 keys:(id)a1 container:(id)a2 appGroupContainer:(id)a3;
- (void)unsafe_invalidate;
- (void).cxx_destruct;
- (void)synchronizeNanoDomain:(id)a0 keys:(id)a1 cloudEnabled:(BOOL)a2;
- (id)init;
- (void)synchronizeUserDefaultsDomain:(id)a0 keys:(id)a1 container:(id)a2 appGroupContainer:(id)a3 cloudEnabled:(BOOL)a4;
- (void)invalidate;
- (id)connection;
- (void)dealloc;
- (void)synchronizeNanoDomain:(id)a0 keys:(id)a1;
- (void)synchronizeUserDefaultsDomain:(id)a0 keys:(id)a1 cloudEnabled:(BOOL)a2;

@end
