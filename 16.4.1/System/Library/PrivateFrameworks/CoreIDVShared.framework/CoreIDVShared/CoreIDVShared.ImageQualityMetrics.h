@class NSString;

@interface CoreIDVShared.ImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ blurriness;
    void /* unknown type, empty encoding */ exposure;
    void /* unknown type, empty encoding */ cardDistortion;
    void /* unknown type, empty encoding */ faceToImageRatio;
    void /* unknown type, empty encoding */ faceCenteredRatio;
    void /* unknown type, empty encoding */ headPitch;
    void /* unknown type, empty encoding */ headRoll;
    void /* unknown type, empty encoding */ headYaw;
    void /* unknown type, empty encoding */ blinkingConfidence;
    void /* unknown type, empty encoding */ prescriptionConfidence;
    void /* unknown type, empty encoding */ sunglassesConfidence;
    void /* unknown type, empty encoding */ facemaskConfidence;
    void /* unknown type, empty encoding */ headgearConfidence;
    void /* unknown type, empty encoding */ captureTime;
    void /* unknown type, empty encoding */ faceCaptureQuality;
    void /* unknown type, empty encoding */ faceConfidences;
    void /* unknown type, empty encoding */ numFaces;
    void /* unknown type, empty encoding */ luxLevel;
    void /* unknown type, empty encoding */ skinTone;
    void /* unknown type, empty encoding */ pdf417Detected;
    void /* unknown type, empty encoding */ isAAMVACompliant;
    void /* unknown type, empty encoding */ isAutoCaptured;
    void /* unknown type, empty encoding */ issuerNumber;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ originalVertices;
    void /* unknown type, empty encoding */ targetVertices;
    void /* unknown type, empty encoding */ fuzzyMatchAssessment;
    void /* unknown type, empty encoding */ modelDecision;
    void /* unknown type, empty encoding */ modelVersion;
    void /* unknown type, empty encoding */ exploration;
    void /* unknown type, empty encoding */ rescanCount;
    void /* unknown type, empty encoding */ errorCode;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
