@class NSString, NSDictionary;

@interface CKTransactionalComponentDataSourceReloadModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {
    NSDictionary *_userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;
- (id)changeFromState:(id)a0;

@end
