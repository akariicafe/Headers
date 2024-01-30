@class CKOperationGroup, CKOperationConfiguration;
@protocol CKConvenienceCallbackWrapper;

@interface CKConvenienceConfiguration : NSObject

@property (readonly, nonatomic) CKOperationConfiguration *configuration;
@property (readonly, nonatomic) CKOperationGroup *group;
@property (readonly, nonatomic) id<CKConvenienceCallbackWrapper> convenienceCallbacks;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 group:(id)a1;
- (id)initWithConfiguration:(id)a0 group:(id)a1 convenienceCallbackWrapper:(id)a2;

@end
