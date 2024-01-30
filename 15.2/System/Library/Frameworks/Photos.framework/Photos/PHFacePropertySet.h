@class NSString, PHFace;

@interface PHFacePropertySet : NSObject <PHFacePropertySet>

@property (class, readonly, nonatomic) NSString *propertySetName;

@property (readonly, weak, nonatomic) PHFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToPrefetch;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;

- (id)initWithFetchDictionary:(id)a0 face:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
