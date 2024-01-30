@class BWVISNode, BWMotionAttachmentsNode;

@interface FigCaptureVISPipeline : FigCapturePipeline {
    BWMotionAttachmentsNode *_motionAttachmentsNode;
    BWVISNode *_visNode;
    BWVISNode *_sdofVISNode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _irisVISCleanOutputRect;
}

+ (void)initialize;

- (void)dealloc;

@end
