@class NSString, CKTransactionalComponentDataSourceChangeset, NSDictionary;
@protocol CKComponentStateListener;

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {
    id<CKComponentStateListener> _stateListener;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) CKTransactionalComponentDataSourceChangeset *changeset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
