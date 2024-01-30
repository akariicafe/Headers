@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture {
    int _presentationType;
}

@property (readonly, copy, nonatomic) id<NSCopying> payload;
@property (readonly, nonatomic) int presentationType;

- (struct CGImage { } *)imageRepresentation;
- (long long)estimatedByteSize;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)init;
- (id)initWithPayload:(id)a0 presentationType:(int)a1;
- (void).cxx_destruct;

@end
