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

- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (id)optionsDictionaryWithError:(id *)a0;
- (id)matchResultInfoWithServerIdentity:(id)a0 details:(id)a1;

@end
