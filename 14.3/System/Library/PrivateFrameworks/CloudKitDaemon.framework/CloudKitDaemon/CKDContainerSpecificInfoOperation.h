@class CKDContainerInfo, NSObject;
@protocol OS_dispatch_group;

@interface CKDContainerSpecificInfoOperation : CKDOperation

@property (copy, nonatomic) CKDContainerInfo *containerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)setCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldCheckAppVersion;

@end
