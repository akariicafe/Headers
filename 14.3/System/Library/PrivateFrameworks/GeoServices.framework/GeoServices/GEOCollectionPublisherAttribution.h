@class NSURL, NSString;

@interface GEOCollectionPublisherAttribution : NSObject

@property (readonly, nonatomic) NSURL *websiteURL;
@property (readonly, nonatomic) NSString *applicationAdamId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned int iconIdentifier;
@property (readonly, nonatomic) unsigned int logoIdentifier;
@property (readonly, nonatomic) unsigned int logoCenteredIdentifier;
@property (readonly, nonatomic) NSString *themeColorLightMode;
@property (readonly, nonatomic) NSString *themeColorDarkMode;

+ (id)bestAttributionForPublisher:(id)a0 preferredLanguages:(id)a1;
+ (id)bestAttributionForPublisher:(id)a0;

- (void).cxx_destruct;
- (id)initWithPublisherAttributionSource:(id)a0 preferredLanguages:(id)a1;

@end
