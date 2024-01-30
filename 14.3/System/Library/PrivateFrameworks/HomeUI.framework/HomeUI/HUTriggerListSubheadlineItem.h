@protocol HasRemoteAccessState;

@interface HUTriggerListSubheadlineItem : HFItem <HUItemMapsToView>

@property (readonly, nonatomic) id<HasRemoteAccessState> remoteAccessInfo;

- (id)_attributedDescription;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)resultsForRemoteAccessState:(unsigned long long)a0;
- (id)_attributedDescriptionForNoRemoteAccess;
- (Class)mapsToViewClass;
- (id)initWithRemoteAccessInfo:(id)a0;

@end
