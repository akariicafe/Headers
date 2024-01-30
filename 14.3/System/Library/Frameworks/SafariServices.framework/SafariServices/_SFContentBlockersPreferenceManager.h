@class NSString;

@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver>

@property (readonly, nonatomic) BOOL hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
