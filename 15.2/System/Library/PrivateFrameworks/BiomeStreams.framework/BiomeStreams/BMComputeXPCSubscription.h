@class NSString, NSXPCConnection, NSSet, BMDSL, NSObject, BMDSLSubscriber;
@protocol OS_os_transaction;

@interface BMComputeXPCSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *client;
@property (readonly, nonatomic) BOOL waking;
@property (readonly, nonatomic) NSSet *streamIdentifiers;
@property (readonly, nonatomic) BMDSL *graph;
@property (readonly, nonatomic) BMDSLSubscriber *subscriber;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) unsigned long long token;

+ (id)storageForIdentifier:(id)a0;

- (id)initWithToken:(unsigned long long)a0 descriptor:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)XPCEvent;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 client:(id)a1 waking:(BOOL)a2 DSLGraph:(id)a3 subscriber:(id)a4 block:(id /* block */)a5;
- (id)initWithIdentifier:(id)a0 client:(id)a1 waking:(BOOL)a2 DSLGraph:(id)a3 block:(id /* block */)a4;

@end
