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

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setReadType:(long long)a0;
- (void)setUserNotificationType:(long long)a0;
- (void)setStartAnnouncementIdentifier:(id)a0;
- (id)initWithReadType:(long long)a0 startAnnouncementIdentifier:(id)a1 userNotificationType:(long long)a2;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
