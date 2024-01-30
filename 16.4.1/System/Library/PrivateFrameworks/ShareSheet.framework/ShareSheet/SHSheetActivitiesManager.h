@class _UIActivityMatchingResults, NSMutableDictionary, NSArray, NSString, _UIActivityHelper, _UIActivityMatchingContext;
@protocol SHSheetActivitiesManagerDelegate;

@interface SHSheetActivitiesManager : NSObject <_UIActivityHelperDelegate>

@property (retain, nonatomic) _UIActivityHelper *activityHelper;
@property (retain, nonatomic) NSMutableDictionary *internalActivitiesByUUID;
@property (copy, nonatomic) NSArray *hiddenActivities;
@property (retain, nonatomic) NSArray *orderedActivities;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (retain, nonatomic) _UIActivityMatchingContext *currentContext;
@property (retain, nonatomic) _UIActivityMatchingResults *currentResults;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSArray *applicationActivities;
@property (weak, nonatomic) id<SHSheetActivitiesManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addActivity:(id)a0;
- (void)_addActivities:(id)a0;
- (void)removeActivity:(id)a0;
- (id)activitiesByUUID;
- (id)activityForActivityType:(id)a0;
- (id)activityForIdentifier:(id)a0;
- (BOOL)activityHelper:(id)a0 matchingWithContext:(id)a1 shouldIncludeSystemActivityType:(id)a2 sessionID:(id)a3;
- (id)initWithSessionIdentifier:(id)a0 applicationActivities:(id)a1;
- (void)preheatActivitiesIfNeeded;
- (void)updateActivitiesWithContext:(id)a0;

@end
