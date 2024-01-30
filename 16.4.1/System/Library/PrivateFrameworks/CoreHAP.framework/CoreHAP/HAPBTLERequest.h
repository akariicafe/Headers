@class HAPBTLEControlOutputStream, HAPCharacteristic, HMFTimer, HAPBTLETransactionIdentifier, HAPService, NSData, HMFBlockOperation;

@interface HAPBTLERequest : HMFObject

@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPService *service;
@property (readonly, nonatomic) HAPCharacteristic *characteristic;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, copy, nonatomic) NSData *body;
@property (readonly, nonatomic) double timeoutInterval;
@property (weak, nonatomic) HMFBlockOperation *operation;
@property (retain, nonatomic) HAPBTLEControlOutputStream *controlOutputStream;
@property (retain, nonatomic) HMFTimer *responseTimer;

- (void)cancelWithError:(id)a0;
- (id)shortDescription;
- (id)debugDescription;
- (id)init;
- (id)serialize;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)_initWithCharacteristic:(id)a0 requestType:(unsigned char)a1 bodyData:(id)a2 shouldEncrypt:(BOOL)a3 timeoutInterval:(double)a4;
- (id)_serializeHeader;
- (id)initWithCharacteristic:(id)a0 requestType:(unsigned char)a1 bodyData:(id)a2 shouldEncrypt:(BOOL)a3 timeoutInterval:(double)a4;
- (id)initWithRequestType:(unsigned char)a0 bodyData:(id)a1 shouldEncrypt:(BOOL)a2 timeoutInterval:(double)a3;

@end
