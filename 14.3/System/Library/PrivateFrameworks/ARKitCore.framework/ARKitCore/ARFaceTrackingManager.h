@class NSUUID;

@interface ARFaceTrackingManager : NSObject {
    NSUUID *_singleUserAnchorIdentifier;
}

@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces;

+ (void)initialize;
+ (BOOL)isSupported;

- (id)initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)a0 options:(id)a1;
- (id)faceTrackingOptionsFromImageData:(id)a0 withCallback:(id /* block */)a1;

@end
