@class NSXPCConnection, NSObject;
@protocol OS_os_transaction;

@interface _EXConnectionActiveQueryObserver : NSObject <_EXActiveQueryObserver>

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) NSXPCConnection *connection;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWitConnection:(id)a0;
- (void)query:(id)a0 resultDidUpdate:(id)a1;

@end
