@class NSNumber, NSArray, NSData;
@protocol BKMatchOperationDelegate;

@interface BKMatchOperation : BKOperation

@property (weak, nonatomic) id<BKMatchOperationDelegate> delegate;
@property (nonatomic) long long purpose;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSArray *selectedIdentities;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSData *credentialSet;
@property (nonatomic) long long useCase;
@property (nonatomic) BOOL stopOnSuccess;
@property (nonatomic) BOOL captureOnly;

- (id)initWithDevice:(id)a0;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)dealloc;
- (id)optionsDictionaryWithError:(id *)a0;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)matchResultInfoWithServerIdentity:(id)a0 details:(id)a1;
- (void)operationInterrupted;
- (void)processMatchFailReason:(long long)a0;

@end
