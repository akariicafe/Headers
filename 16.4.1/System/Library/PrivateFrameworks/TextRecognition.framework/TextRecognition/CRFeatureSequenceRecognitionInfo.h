@class NSString, NSObject, CRTextFeature;
@protocol CRTextRecognizerDecodingTransientResult;

@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo>

@property (retain) CRTextFeature *textFeature;
@property float scale;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGSize { double width; double height; } featureImageSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotatedROI;
@property long long orientationAdjustment;
@property double orientationConfidence;
@property (retain) NSString *orientationOutputResult;
@property (retain) NSString *sequenceScript;
@property (retain) NSString *sequenceScriptOutputResult;
@property (retain) NSObject<CRTextRecognizerDecodingTransientResult> *transientDecodingResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoForFeature:(id)a0 scale:(float)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 featureImageSize:(struct CGSize { double x0; double x1; })a3 rotatedROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

- (void).cxx_destruct;

@end
