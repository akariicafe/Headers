@class NSString;

@interface HMDCoreDataCloudTransformableLocalModelOnly : NSObject <HMFLogging, HMDCoreDataCloudTransformable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)new;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

- (id)init;
- (id)fetchLocalModelWithContext:(id)a0;
- (id)createLocalModelWithContext:(id)a0;

@end
