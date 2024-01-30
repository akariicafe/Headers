@class NSUUID, NSString, BLSHPresentationDateSpecifier;

@interface BLSHPseudoFlipbookFrame : NSObject <BLSHRenderedFlipbookFrame>

@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly, nonatomic) BLSHPresentationDateSpecifier *bls_specifier;
@property (readonly, nonatomic) unsigned long long presentationTime;
@property (readonly, nonatomic) unsigned long long frameId;
@property (readonly, nonatomic) float apl;
@property (readonly, nonatomic) float aplDimming;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __IOSurface { } *rawSurface;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rawSurfaceFrame;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted;
@property (readonly, nonatomic) NSUUID *bls_uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;
- (id)initWithPresentationTime:(unsigned long long)a0 frameId:(unsigned long long)a1 specifier:(id)a2 memoryUsage:(unsigned long long)a3;

@end
