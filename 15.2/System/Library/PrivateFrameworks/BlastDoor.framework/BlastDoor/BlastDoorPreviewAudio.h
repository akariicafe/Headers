@class NSString, NSArray;

@interface BlastDoorPreviewAudio : NSObject {
    void /* unknown type, empty encoding */ previewAudio;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *powerLevels;

- (void).cxx_destruct;
- (id)init;

@end
