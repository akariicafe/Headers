@class BKIdentity, NSData;
@protocol BKExtendEnrollTouchIDOperationDelegate;

@interface BKExtendEnrollTouchIDOperation : BKOperation

@property (weak, nonatomic) id<BKExtendEnrollTouchIDOperationDelegate> delegate;
@property (retain, nonatomic) BKIdentity *identity;
@property (copy, nonatomic) NSData *credentialSet;

- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)homeButtonPressed:(unsigned long long)a0;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;

@end
