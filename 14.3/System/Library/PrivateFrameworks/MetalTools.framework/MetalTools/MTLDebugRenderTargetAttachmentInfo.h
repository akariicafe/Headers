@protocol MTLTexture;

@interface MTLDebugRenderTargetAttachmentInfo : NSObject

@property (readonly, nonatomic) id<MTLTexture> attachmentTexture;
@property (readonly, nonatomic) id<MTLTexture> baseResolveTexture;
@property (readonly, nonatomic) id<MTLTexture> baseTexture;
@property (readonly, nonatomic) unsigned long long renderTargetArrayLength;
@property (readonly, nonatomic) unsigned long long baseLevelOffset;
@property (readonly, nonatomic) unsigned long long resolveLevelOffset;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } baseSliceRangeOffset;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } resolveSliceRangeOffset;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDesc:(const struct MTLRenderPassAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct { double x0; double x1; double x2; double x3; } x7; double x8; unsigned int x9; unsigned long long x10; id x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; } *)a0 renderTargetArrayLength:(unsigned long long)a1;
- (unsigned long long)intersectsTexture:(id)a0;

@end
