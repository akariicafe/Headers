@class VCStreamOutput;

@interface VCPixelBufferOverlay : VCObject {
    struct CGContext { } *_bitmapContext;
}

@property struct VCInfoDetails { BOOL isLocalVideo; float averageFrameRate; float currentFrameRate; struct CGSize { double width; double height; } currentDimensions; struct __CFDictionary *storedAttributes; long long streamToken; VCStreamOutput *streamOutput; struct VCOverlayAudioInfo { int bitrateTotal; int birateMedia; int codec; int streamID; } audioInfo; struct VCOverlayVideoInfo { int fps; int bitrateTotal; int birateMedia; int currentFECLevel; int codec; int streamID; } videoInfo; } currentDetails;

- (void)dealloc;
- (id)init;
- (void)drawOverlayMessage:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 attributes:(struct __CFDictionary { } *)a2;
- (id)reverseString:(id)a0;
- (void)updateOverlayWithPixelBuffer:(struct __CVBuffer { } *)a0;

@end
