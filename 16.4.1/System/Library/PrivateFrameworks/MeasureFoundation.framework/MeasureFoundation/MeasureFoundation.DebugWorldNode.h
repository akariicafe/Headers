@interface MeasureFoundation.DebugWorldNode : MeasureFoundation.MetalNode {
    void /* unknown type, empty encoding */ kCameraRotationThreshold;
    void /* unknown type, empty encoding */ worldPointsPipelineState;
    void /* unknown type, empty encoding */ capturedImageTextureY;
    void /* unknown type, empty encoding */ capturedImageTextureCbCr;
    void /* unknown type, empty encoding */ capturedImageTextureCache;
    void /* unknown type, empty encoding */ worldPointsBuffer;
    void /* unknown type, empty encoding */ worldPointsBufferPtr;
    void /* unknown type, empty encoding */ worldPointsColorsBuffer;
    void /* unknown type, empty encoding */ worldPointsColorsBufferPtr;
    void /* unknown type, empty encoding */ worldPointsCurrentIndex;
    void /* unknown type, empty encoding */ worldPointsNum;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ lastCameraTransform;
}

- (void)appDidEnterBackground;

@end
