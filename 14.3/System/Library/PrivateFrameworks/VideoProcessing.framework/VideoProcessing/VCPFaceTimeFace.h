@class VNFaceprint;

@interface VCPFaceTimeFace : NSObject

@property (retain, nonatomic) VNFaceprint *faceprint;

+ (id)faceFromManagedObject:(id)a0;
+ (id)face;

- (id)managedObjectForContext:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
