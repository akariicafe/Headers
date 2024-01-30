@class NSString, NSDictionary, NSSet, UIImage;
@protocol NCNotificationMuteAssertion;

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSString *subSectionIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *settings;
@property (readonly, copy, nonatomic) NSSet *subSectionSettings;
@property (readonly, nonatomic, getter=isUserConfigurable) BOOL userConfigurable;
@property (readonly, nonatomic) UIImage *settingsIcon;
@property (readonly, nonatomic) BOOL showsCustomSettingsLink;
@property (readonly, nonatomic) BOOL isDeliveredQuietly;
@property (readonly, nonatomic) BOOL hasProvisionalAuthorization;
@property (readonly, nonatomic) BOOL isAppClip;
@property (readonly, nonatomic) id<NCNotificationMuteAssertion> muteAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationSectionSettings:(id)a0;

@end
