@protocol MTLTexture;

@interface RegPyrFusionResources : NSObject {
    struct { unsigned long long interimNextShiftMap; unsigned long long nonRefDerivTex; unsigned long long prevShiftMap; unsigned long long shiftMapWeight; unsigned long long refDerivTex; unsigned long long refTextureY[20]; unsigned long long nonRefTextureY[20]; } offsets;
    id<MTLTexture> refDerivTex[20];
    id<MTLTexture> refDerivAsU32[20];
    id<MTLTexture> interim[20];
    id<MTLTexture> interimAsU32[20];
    id<MTLTexture> nonRefDerivTex[20];
    id<MTLTexture> prevShiftMap[20];
    id<MTLTexture> prevShiftMapAsRGBA[20];
    id<MTLTexture> nextShiftMap[20];
    id<MTLTexture> shiftMapWeight[20];
    id<MTLTexture> confidenceMap;
    id<MTLTexture> prevShiftMapAsU32;
    id<MTLTexture> nextShiftMapAsR16;
    id<MTLTexture> nextShiftMapAsRG16;
    id<MTLTexture> confidenceMapAsRG16;
}

- (void).cxx_destruct;

@end
