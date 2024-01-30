@class CKDContainerServerInfo, NSObject;
@protocol OS_dispatch_group;

@interface CKDContainerSpecificInfoOperation : CKDOperation

@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) BOOL requireUserIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *infoFetchedGroup;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id /* block */)a0;

@end
