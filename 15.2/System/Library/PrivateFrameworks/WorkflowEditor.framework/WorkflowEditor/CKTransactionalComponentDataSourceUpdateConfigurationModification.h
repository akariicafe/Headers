@class NSString, NSDictionary, CKTransactionalComponentDataSourceConfiguration;

@interface CKTransactionalComponentDataSourceUpdateConfigurationModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {
    CKTransactionalComponentDataSourceConfiguration *_configuration;
    NSDictionary *_userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 userInfo:(id)a1;
- (id)changeFromState:(id)a0;

@end
