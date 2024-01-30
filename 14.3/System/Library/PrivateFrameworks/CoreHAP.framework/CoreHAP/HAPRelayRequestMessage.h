@class NSData, NSMutableSet, HMFBlockOperation;

@interface HAPRelayRequestMessage : HMFObject

@property (nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) NSMutableSet *requestIdentifiers;
@property (readonly, copy, nonatomic) NSData *body;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) BOOL sent;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double timeout;
@property (weak, nonatomic) HMFBlockOperation *operation;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
- (id)debugDescription;
- (id)initWithRequestData:(id)a0 messageType:(unsigned long long)a1 timeout:(double)a2;
- (void)addRequestIdentifier:(id)a0;

@end
