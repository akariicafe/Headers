@class PFParallaxLayerStyle, PISegmentationContextInfo, NSArray, NSURL, PIParallaxColorAnalysis, NSDictionary, NSString, PFParallaxAssetResource, NUComposition, PFParallaxLayout;
@protocol PFParallaxAssetRegions, PFParallaxLayoutConfiguration, NUImageBuffer;

@interface PIParallaxSegmentationItem : NSObject <PISegmentationItem, NSCopying>

@property (copy, nonatomic) NSArray *_availableStyles;
@property (copy, nonatomic) NSArray *_defaultStyles;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *segmentationDataURL;
@property (retain, nonatomic) PISegmentationContextInfo *contextInfo;
@property (retain, nonatomic) PFParallaxAssetResource *resource;
@property (retain, nonatomic) NUComposition *composition;
@property (nonatomic) unsigned long long classification;
@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (retain, nonatomic) id<NUImageBuffer> segmentationConfidenceMap;
@property (retain, nonatomic) id<NUImageBuffer> segmentationBackground;
@property (retain, nonatomic) id<PFParallaxAssetRegions> regions;
@property (retain, nonatomic) PFParallaxLayout *defaultLayout;
@property (retain, nonatomic) PFParallaxLayout *originalLayout;
@property (copy, nonatomic) NSDictionary *scores;
@property (retain, nonatomic) PIParallaxColorAnalysis *colorAnalysis;
@property (copy, nonatomic) NSDictionary *localLightData;
@property (nonatomic) unsigned long long loadingState;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (readonly, copy, nonatomic) NSArray *availableStyles;
@property (readonly, copy, nonatomic) NSArray *defaultStyles;
@property (readonly, nonatomic) PFParallaxLayerStyle *originalStyle;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL supportsManualClockIntersectionTolerance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataForImageBuffer:(id)a0 error:(out id *)a1;
+ (id)imageBufferFromData:(id)a0 error:(out id *)a1;
+ (id)readImageBufferFromURL:(id)a0 error:(out id *)a1;
+ (BOOL)writeImageBuffer:(id)a0 toURL:(id)a1 error:(out id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromURL:(id)a0 error:(out id *)a1;
- (id)contentsDictionary;
- (BOOL)saveToURL:(id)a0 error:(out id *)a1;
- (void)_populateAvailableStyles;
- (void)_populateDefaultStyles;
- (id)availableStyleOfKind:(id)a0;
- (id)defaultStyleOfKind:(id)a0;
- (BOOL)loadContentsFromDictionary:(id)a0 hasMatte:(BOOL *)a1 hasBackground:(BOOL *)a2 error:(out id *)a3;
- (BOOL)loadSegmentationDataFromURL:(id)a0 error:(out id *)a1;
- (BOOL)saveAssetResourceToURL:(id)a0 error:(out id *)a1;
- (BOOL)saveSegmentationDataToURL:(id)a0 error:(out id *)a1;
- (id)suggestedStyleForCategory:(id)a0;

@end
