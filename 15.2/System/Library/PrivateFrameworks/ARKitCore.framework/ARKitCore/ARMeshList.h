@class NSSet, NSString;

@interface ARMeshList : NSObject <ARResultData> {
    double _timestamp;
}

@property (retain) NSSet *updatedAnchors;
@property (retain) NSSet *removedAnchors;
@property (readonly, nonatomic) const struct CV3DReconMeshList { } *meshList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
