@class NSString;

@interface CLKCComplicationBundleDataSource : CLKCComplicationDataSource

@property (class, readonly, nonatomic) NSString *bundleIdentifier;
@property (class, readonly, nonatomic) NSString *appIdentifier;
@property (class, readonly, nonatomic) NSString *localizedAppName;
@property (class, readonly, nonatomic) NSString *localizedComplicationName;
@property (class, readonly, nonatomic) NSString *complicationApplicationIdentifier;

+ (id)appGroupIdentifier;
+ (id)legacyNTKComplicationType;

- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;

@end
