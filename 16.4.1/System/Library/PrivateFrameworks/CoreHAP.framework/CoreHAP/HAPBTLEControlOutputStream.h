@class NSOperationQueue, HAPBTLETransactionIdentifier, NSObject, NSData;
@protocol OS_dispatch_queue, HAPBTLEControlOutputStreamDelegate;

@interface HAPBTLEControlOutputStream : HMFObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isOpen) BOOL open;
@property (nonatomic) unsigned long long controlPayloadWrittenLength;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (weak) id<HAPBTLEControlOutputStreamDelegate> delegate;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, nonatomic) unsigned long long mtuLength;
@property (readonly, nonatomic) double timeoutInterval;

+ (id)shortDescription;

- (void)_complete;
- (id)shortDescription;
- (void)open;
- (id)debugDescription;
- (void)close;
- (void)_closeWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)_nextPacketWithMaximumLength:(unsigned long long)a0 error:(id *)a1;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(id /* block */)a0;
- (id)initWithControlType:(unsigned char)a0 transactionIdentifier:(id)a1 controlPayload:(id)a2 mtuLength:(unsigned long long)a3 timeoutInterval:(double)a4;
- (unsigned long long)remainingControlPayloadLength;
- (void)sendNextPayloadFragment;

@end
