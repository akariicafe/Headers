@class NSMutableArray;

@interface AVVideoCompositionLayerInstructionInternal : NSObject {
    int trackID;
    NSMutableArray *transformRamps;
    NSMutableArray *opacityRamps;
    NSMutableArray *cropRectangleRamps;
}

@end
