@class NSString;

@interface NSSQLiteIndexTrackingModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)newModelForFrameworkVersion:(id)a0;
+ (void)updateIndexStatistics:(id)a0 usingConnection:(id)a1 model:(id)a2;
+ (unsigned long long)ancillaryEntityCount;
+ (id)ancillaryModelNamespace;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;


@end
