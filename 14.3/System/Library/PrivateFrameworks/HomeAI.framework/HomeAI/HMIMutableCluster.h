@class NSArray, NSSet, NSString, NSMutableSet, HMIDESMutableFloatArray, NSMutableArray;

@interface HMIMutableCluster : HMFObject <HMFLogging> {
    NSMutableArray *_faceprintUUIDs;
    NSMutableSet *_linkedEntityUUIDs;
}

@property (readonly) HMIDESMutableFloatArray *centroid;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) NSArray *faceprintUUIDs;
@property (readonly) NSSet *linkedEntityUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
