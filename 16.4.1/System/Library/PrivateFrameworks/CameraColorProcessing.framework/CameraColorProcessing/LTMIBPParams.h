@class NSDictionary, NSString;
@protocol MTLTexture;

@interface LTMIBPParams : NSObject <LTMIBPParams>

@property (retain, nonatomic) NSDictionary *validBufferRect;
@property (nonatomic) int optimizationLevel;
@property (nonatomic) BOOL calcGlobalHistOnROI;
@property (nonatomic) BOOL digitalFlash;
@property (retain, nonatomic) NSDictionary *inMetaData;
@property (retain, nonatomic) id<MTLTexture> inRGBImageUInt16Tex;
@property (retain, nonatomic) NSDictionary *outMetaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;

@end
