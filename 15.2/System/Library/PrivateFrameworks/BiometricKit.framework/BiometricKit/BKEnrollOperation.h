@class NSData;
@protocol BKEnrollOperationDelegate;

@interface BKEnrollOperation : BKOperation

@property (weak, nonatomic) id<BKEnrollOperationDelegate> delegate;
@property (nonatomic) unsigned int userID;
@property (copy, nonatomic) NSData *credentialSet;

- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;
- (id)optionsDictionaryWithError:(id *)a0;
- (id)enrollResultInfoWithServerIdentity:(id)a0 details:(id)a1;

@end
