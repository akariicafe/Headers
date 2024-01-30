@class INAnnouncement, NSArray, NSString, NSNumber;

@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>

@property (readonly, copy, nonatomic) INAnnouncement *announcement;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSNumber *isReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (long long)_preferredInteractionDirection;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setRecipients:(id)a0;
- (void)setAnnouncement:(id)a0;
- (id)initWithAnnouncement:(id)a0 recipients:(id)a1 isReply:(id)a2;
- (id)domain;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setIsReply:(id)a0;
- (id)_dictionaryRepresentation;

@end
