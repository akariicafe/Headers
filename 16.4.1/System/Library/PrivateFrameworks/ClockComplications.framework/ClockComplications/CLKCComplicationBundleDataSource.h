@class NSString, NSOrderedSet, CLKComplicationDescriptor;

@interface CLKCComplicationBundleDataSource : CLKCComplicationDataSource

@property (class, readonly, nonatomic) NSString *bundleIdentifier;
@property (class, readonly, nonatomic) NSString *appIdentifier;
@property (class, readonly, nonatomic) NSString *sectionIdentifier;
@property (class, readonly, nonatomic) NSString *localizedAppName;
@property (class, readonly, nonatomic) NSString *localizedComplicationName;
@property (class, readonly, nonatomic) NSOrderedSet *complicationDescriptors;
@property (class, readonly, nonatomic) BOOL useComplicationDescriptorsOnCompanion;
@property (class, readonly, nonatomic) NSString *complicationApplicationIdentifier;

@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

+ (id)appGroupIdentifier;
+ (id)legacyNTKComplicationType;

- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;

@end
