@class NSArray, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
}

- (void)dealloc;

@end
