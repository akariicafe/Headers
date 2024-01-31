@class NSString;

@interface CKSyncEngineFetchChangesZoneConfiguration : NSObject <CKPropertiesDescription, NSCopying>

@property BOOL shouldFetchAssetContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;

@end
