@class NSString;

@interface INReadAnnouncementIntent : INIntent <UNNotificationContentProviding, INReadAnnouncementIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long readType;
@property (readonly, copy, nonatomic) NSString *startAnnouncementIdentifier;
@property (readonly, nonatomic) long long userNotificationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (void)setStartAnnouncementIdentifier:(id)a0;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithReadType:(long long)a0 startAnnouncementIdentifier:(id)a1 userNotificationType:(long long)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setReadType:(long long)a0;
- (void)setUserNotificationType:(long long)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
