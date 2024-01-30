@class IrisVideoMetadataExtractor, NSArray, NSDictionary, ExifMetadataExtractor, NSMutableDictionary;

@interface PregateFeatureBuilder : NSObject

@property struct vector<CMTime, std::__1::allocator<CMTime> > { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *__value_; } __end_cap_; } frameTimes;
@property struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { struct *__begin_; struct *__end_; struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { struct *__value_; } __end_cap_; } frameOffsets;
@property struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { struct *__begin_; struct *__end_; struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { struct *__value_; } __end_cap_; } frameBlurVectors;
@property (retain) NSArray *stdProcessInputKeysArray;
@property (retain) NSDictionary *stillImageMetadata;
@property (retain) NSArray *facesArray;
@property (retain) NSArray *movieMetadata;
@property (retain) NSDictionary *videoTrackMetadataDict;
@property (retain) IrisVideoMetadataExtractor *irisVideoExtractor;
@property (retain) ExifMetadataExtractor *irisStillExtractor;
@property (readonly) NSMutableDictionary *featuresDict;
@property (readonly) NSMutableDictionary *fullFeaturesDict;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)processVideo;
- (int)processStill;
- (int)fillVector:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 withPerFrameStats:(id)a1;
- (int)standardProcessKey:(id)a0 addToDictionary:(id)a1;
- (int)processStandardPerFrameKeys;
- (int)readPerFrameMetadataToArrays;
- (int)processBlurVectors;
- (int)processOffsetVectors;
- (int)processPresentationTimes;
- (int)processVideoFaceInfo;
- (int)processStillImageMetadata;
- (int)processStillImageFaceData;
- (int)processMovieMetadata;
- (int)processVidTrackMetadata;
- (int)processStillInternal;
- (int)processVideoInternal;
- (void)buildFullDictionary;
- (int)processFullDictionary:(BOOL)a0;

@end
