@class NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface HAPAddRemovePairingOperation : HMFObject

@property (nonatomic) long long operation;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) BOOL admin;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL operationExecuting;

- (void).cxx_destruct;
- (id)initWith:(long long)a0 identifier:(id)a1 publicKey:(id)a2 admin:(BOOL)a3 queue:(id)a4 completion:(id /* block */)a5;

@end
