@class NSUUID, NSString, ATXAVRouteInfo, NSDictionary, NSUserActivity, CSSearchableItemAttributeSet, INIntent, ATXActionCriteria, UAUserActivityProxy, ATXLazyIntent;

@interface ATXAction : NSObject <CRContent, ATXLazyIntentDelegateProtocol, NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver> {
    NSUserActivity *_userActivity;
    unsigned long long _userActivityHash;
    NSString *_title;
    NSString *_subtitle;
    NSString *_languageCode;
    ATXActionCriteria *_criteria;
    ATXLazyIntent *_lazyIntent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *userActivityString;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *contentAttributeSet;
@property (readonly, nonatomic) ATXAVRouteInfo *routeInfo;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) ATXActionCriteria *criteria;
@property (readonly, nonatomic) NSUUID *actionUUID;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *heuristic;
@property (readonly, nonatomic) NSDictionary *heuristicMetadata;
@property (readonly, nonatomic) BOOL isHeuristic;
@property (readonly, nonatomic) BOOL isFutureMedia;
@property (readonly, nonatomic) BOOL isTVWhiteListedLongFormMedia;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) UAUserActivityProxy *userActivityProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extractValueInKeyValueBlob:(id)a0 withKey:(id)a1;
+ (id)getDateFromUserActivityString:(id)a0 forActionKey:(id)a1;
+ (unsigned long long)_userActivityHashForUserInfoDict:(id)a0 activityType:(id)a1 webpageURL:(id)a2;
+ (id)unarchivedActionFromData:(id)a0;
+ (BOOL)_isTVIntent:(id)a0 bundleId:(id)a1;
+ (id)getNSUATypefromActivityType:(id)a0;
+ (id)getActionKeyForBundleId:(id)a0 actionType:(id)a1;

- (void)handleMemoryPressure;
- (id)actionTitle;
- (id)actionKey;
- (id)_initWithCoder:(id)a0;
- (id)actionDescription;
- (BOOL)hasActionTitle;
- (BOOL)isEqualToAction:(id)a0;
- (id)initWithIntent:(id)a0 actionUUID:(id)a1 bundleId:(id)a2 heuristic:(id)a3 heuristicMetadata:(id)a4 criteria:(id)a5 isFutureMedia:(BOOL)a6 title:(id)a7 subtitle:(id)a8;
- (id)init;
- (id)_bundleIdForDisplay;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitleForSerializationToCache;
- (unsigned long long)userActivityHash;
- (void)dealloc;
- (id)json;
- (void)setCriteria:(id)a0;
- (BOOL)_shouldUseCachedTitle:(id)a0 cachedLanguageCode:(id)a1;
- (id)initWithNSUserActivityString:(id)a0 actionUUID:(id)a1 bundleId:(id)a2 itemIdentifier:(id)a3 contentAttributeSet:(id)a4 heuristic:(id)a5 heuristicMetadata:(id)a6 isFutureMedia:(BOOL)a7 title:(id)a8 subtitle:(id)a9;
- (id)initWithProtoData:(id)a0;
- (BOOL)isTVAction;
- (id)archivedDataForAction;
- (void)setHeuristic:(id)a0;
- (id)_subtitle;
- (unsigned long long)hashSlotSetWithNonNilParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNSUserActivity:(id)a0 actionUUID:(id)a1 bundleId:(id)a2 contentAttributeSet:(id)a3 itemIdentifier:(id)a4 heuristic:(id)a5 heuristicMetadata:(id)a6 criteria:(id)a7 isFutureMedia:(BOOL)a8 title:(id)a9 subtitle:(id)a10;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void)didDeserializeIntent:(id)a0;
- (void)setSubtitleForSerializationToCache;
- (id)actionWithRouteInfo:(id)a0;
- (void)setLaunchIdForIntent:(id)a0;
- (id)_title;
- (id)initWithActivityProxy:(id)a0 activity:(id)a1 activityString:(id)a2 itemIdentifier:(id)a3 contentAttributeSet:(id)a4 intent:(id)a5 actionUUID:(id)a6 bundleId:(id)a7 type:(unsigned long long)a8 heuristic:(id)a9 heuristicMetadata:(id)a10 criteria:(id)a11 isFutureMedia:(BOOL)a12 routeInfo:(id)a13 title:(id)a14 subtitle:(id)a15 languageCode:(id)a16;
- (BOOL)isEqual:(id)a0;
- (id)dateForAction;
- (id)predictionTypeStringForPET;
- (id)_spotlightContentType;
- (id)copyWithParameterWhitelist:(id)a0;
- (id)underlyingInteraction;
- (id)initFromBestAppSuggestion:(id)a0 activity:(id)a1 actionUUID:(id)a2 bundleId:(id)a3 contentAttributeSet:(id)a4 itemIdentifier:(id)a5 heuristic:(id)a6 heuristicMetadata:(id)a7 criteria:(id)a8 isFutureMedia:(BOOL)a9 title:(id)a10 subtitle:(id)a11;
- (id)actionSubtitle;
- (void)_setUserActivityHash:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
