@class NSUUID, NSString, BLSDiagnosticPresentationDateSpecifier;
@protocol BLSPresentationDateSpecifying, BLSDiagnosticFlipbookFrameSurfaceProvider;

@interface BLSDiagnosticFlipbookFrame : NSObject <BLSRenderedFlipbookFrame, NSSecureCoding, BSXPCCoding> {
    BLSDiagnosticPresentationDateSpecifier *_specifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<BLSDiagnosticFlipbookFrameSurfaceProvider> surfaceProvider;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long presentationTime;
@property (readonly, nonatomic) unsigned long long frameId;
@property (readonly, nonatomic) float apl;
@property (readonly, nonatomic) float aplDimming;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly, nonatomic) id<BLSPresentationDateSpecifying> bls_specifier;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __IOSurface { } *rawSurface;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rawSurfaceFrame;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted;
@property (readonly, nonatomic) NSUUID *bls_uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithFrame:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithFrame:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;
- (id)initWithPresentationTime:(unsigned long long)a0 frameId:(unsigned long long)a1 apl:(float)a2 aplDimming:(float)a3 memoryUsage:(unsigned long long)a4 rawSurfaceFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 inverted:(BOOL)a6 specifier:(id)a7 uuid:(id)a8;

@end
