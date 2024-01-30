@class NSString, NSMutableDictionary;

@interface SXActionActivityManager : NSObject <SXActionActivityManager>

@property (readonly, nonatomic) NSMutableDictionary *activityProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;
- (id)previewActivityForAction:(id)a0;
- (void)registerActionActivityProvider:(id)a0 actionType:(id)a1;
- (id)activityProviderForAction:(id)a0;

@end
