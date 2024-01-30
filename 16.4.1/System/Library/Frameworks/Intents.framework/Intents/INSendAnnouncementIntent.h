@class INAnnouncement, NSArray, NSString, NSNumber;

@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>

@property (readonly, copy, nonatomic) INAnnouncement *announcement;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSNumber *isReply;
@property (copy, nonatomic) NSString *sharedUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)setIsReply:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (void)setRecipients:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (long long)_preferredInteractionDirection;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithAnnouncement:(id)a0 recipients:(id)a1 isReply:(id)a2 sharedUserID:(id)a3;
- (id)parametersByName;
- (void)setAnnouncement:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
