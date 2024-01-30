@class NSArray, NSDictionary, NSString, NSURL, NSUserActivity, NSDate;

@interface CPSWebClip : NSObject {
    struct CGImage { } *_iconImage;
}

@property (class, readonly, nonatomic) NSArray *appClips;

@property (readonly, nonatomic) NSDictionary *_dictionaryRepresentation;
@property (copy, nonatomic) NSString *_temporaryIconPath;
@property (readonly, nonatomic) unsigned long long bundleVersion;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct CGImage { } *iconImage;
@property (readonly, nonatomic) NSString *iconImagePath;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) NSURL *registeredURL;
@property (readonly, nonatomic) NSUserActivity *appClipUserActivity;
@property (readonly, nonatomic) long long webClipType;
@property (nonatomic) BOOL scenelessBackgroundLaunch;
@property (nonatomic, getter=isPoweredBy) BOOL poweredBy;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *fullAppName;
@property (copy, nonatomic) NSString *fullAppCaption;
@property (copy, nonatomic) NSURL *fullAppStoreURL;
@property (readonly, nonatomic, getter=isApplicationInstalled) BOOL applicationInstalled;
@property (copy, nonatomic) NSDate *lastActivatedTime;

- (id)_init;
- (id)description;
- (void).cxx_destruct;
- (id)_bundleResourceWithName:(id)a0;
- (id)_initWithIdentifier:(id)a0 webClipDictionary:(id)a1;
- (void)_updateWithClipMetadata:(id)a0;

@end
