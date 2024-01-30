@class NSString, BlastDoorAttributionInfo_PreviewGenerationConstraints;

@interface BlastDoorAttributionInfo : NSObject {
    void /* unknown type, empty encoding */ attributionInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_adamID;
@property (nonatomic, readonly) unsigned long long adamID;
@property (nonatomic, readonly) NSString *accessibilityStickerName;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *packName;
@property (nonatomic, readonly) BOOL has_previewGenerationSizeHeight;
@property (nonatomic, readonly) double previewGenerationSizeHeight;
@property (nonatomic, readonly) BOOL has_previewGenerationSizeWidth;
@property (nonatomic, readonly) double previewGenerationSizeWidth;
@property (nonatomic, readonly) BlastDoorAttributionInfo_PreviewGenerationConstraints *previewGenerationConstraints;

- (id)init;
- (void).cxx_destruct;

@end
