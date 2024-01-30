@class NSString, NSArray, NSDictionary;
@protocol REElementDataSourceActivityDelegate, REElementDataSourceDelegate;

@interface REElementDataSource : NSObject <REElementDataSourceProperties> {
    id<REElementDataSourceActivityDelegate> _activityDelegate;
}

@property (class, readonly, nonatomic) NSString *bundleIdentifier;
@property (class, readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (class, readonly, nonatomic) unsigned long long elementContentMode;

@property (weak, nonatomic) id<REElementDataSourceDelegate> delegate;
@property (readonly, nonatomic) NSArray *supportedSections;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) BOOL allowsLocationUse;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *logHeader;
@property (readonly, nonatomic, getter=hasUnlockedSinceBoot) BOOL unlockedSinceBoot;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *dataSourceProperties;

+ (id)contentAttributes;
+ (BOOL)wantsReloadForSignificantTimeChange;
+ (BOOL)wantsPrivateQueue;
+ (BOOL)drivenByUserInteraction;
+ (id)overrideDataSourceImage;
+ (id)overrideLocalizedDataSourceName;
+ (BOOL)wantsAppPrewarm;
+ (BOOL)wantsLocationInUseAsserton;
+ (BOOL)supportsPersistence;
+ (struct { long long x0; long long x1; long long x2; })minimumSupportedSystemVersion;
+ (BOOL)wantsReloadForFirstDeviceUnlock;
+ (BOOL)wantsAutomaticFetching;

- (void)setRunning:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)activityDelegate;
- (void)setActivityDelegate:(id)a0;
- (void)pause;
- (void)resume;
- (void)setUnlockedSinceBoot:(BOOL)a0;
- (void)getElementsInSection:(id)a0 withHandler:(id /* block */)a1;
- (id)complicationDescriptor;
- (void)getElementsDuringDateInterval:(id)a0 inSection:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)beginActivity:(id)a0;
- (void)beginFetchingData;
- (void)finishFetchingData;
- (void)loadLoggingHeader;
- (void)finishActivity:(id)a0;
- (void)elementWithIdentifierWillBecomeVisible:(id)a0;
- (void)elementWithIdentifierDidBecomeHidden:(id)a0;
- (void)collectLoggableState:(id /* block */)a0;

@end
