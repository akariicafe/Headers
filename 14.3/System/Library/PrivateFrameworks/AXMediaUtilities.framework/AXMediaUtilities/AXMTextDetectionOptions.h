@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long recognitionLevel;
@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (retain, nonatomic) NSArray *textDetectionLocales;
@property (nonatomic) BOOL correctSpelling;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (void)encodeWithCoder:(id)a0;

@end
