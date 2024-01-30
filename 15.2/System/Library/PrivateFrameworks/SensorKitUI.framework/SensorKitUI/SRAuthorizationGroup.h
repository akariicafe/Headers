@class NSString, NSArray, UIImage, NSBundle;

@interface SRAuthorizationGroup : NSObject {
    NSBundle *_bundle;
}

@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly, copy) NSArray *localizedCollectedData;
@property (readonly, copy) NSArray *localizedNotCollectedData;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedRequiredAuthAlertDetail;
@property (readonly, copy) NSString *localizedRevokeRequiredAuthAlertDetail;
@property (readonly, copy) NSString *localizedPlatforms;
@property (readonly, copy) NSArray *platforms;
@property (readonly, retain) UIImage *illustration;
@property (readonly, copy) NSArray *localizedSampleData;
@property (readonly, copy) NSString *authorizationService;
@property (readonly, copy) NSString *writerAuthorizationService;

+ (void)initialize;
+ (id)authorizationGroupWithServiceName:(id)a0;

- (id)initWithBundle:(id)a0;
- (id)infoPlistAuthorizationCategory;
- (void)dealloc;
- (id)localizedExampleDataValue:(id)a0;

@end
