@class NSString;
@protocol CKDOperationInfoDelegate;

@interface CKDOperationInfoDelegateWrapper : NSObject

@property (weak, nonatomic) id<CKDOperationInfoDelegate> delegate;
@property (copy, nonatomic) NSString *personaID;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)performWithDelegate:(id /* block */)a0;

@end
