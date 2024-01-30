@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)ancillaryEntityCount;
+ (id)ancillaryModelNamespace;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;


@end
