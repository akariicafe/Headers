@class NSDictionary, NSLocale;

@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *dominantLanguage;
@property (copy, nonatomic) NSDictionary *confidences;
@property (readonly, nonatomic) BOOL isConfident;
@property (nonatomic) BOOL isFinal;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfidences:(id)a0 isConfident:(BOOL)a1 dominantLanguage:(id)a2 isFinal:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;

@end
