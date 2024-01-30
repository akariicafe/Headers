@class NSString, CUINamedTexture, TXRTexture;

@interface CUINamedSolidLayerImage : CUINamedImage <CUINamedLayerImageProtocol> {
    CUINamedTexture *_edgeTexture;
    CUINamedTexture *_gradientTexture;
    TXRTexture *_edgeTXR;
    TXRTexture *_gradientTXR;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
