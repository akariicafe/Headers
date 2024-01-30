@class NSString;

@interface AXSDKShotDetector : AXSDDetector <NSSecureCoding> {
    NSString *_customName;
    NSString *_kshotCategory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)contentVersion;
- (void)addRecording:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)compatibilityVersion;
- (id)recordings;
- (void).cxx_destruct;
- (BOOL)isCustom;
- (BOOL)isEqualToKShotDetector:(id)a0;
- (BOOL)isModelReady;
- (BOOL)isTrainingComplete;
- (id)modelURLString;
- (void)setRecordings:(id)a0;

@end
