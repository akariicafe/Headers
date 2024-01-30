@class NSXPCConnection, NSObject;
@protocol OS_os_transaction;

@interface _EXConnectionActiveQueryObserver : NSObject <_EXActiveQueryObserver>

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) NSXPCConnection *connection;

- (void)query:(id)a0 resultDidUpdate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWitConnection:(id)a0;

@end
