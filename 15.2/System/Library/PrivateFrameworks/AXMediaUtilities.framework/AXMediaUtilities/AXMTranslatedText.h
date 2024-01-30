@class NSString, NSLocale;

@interface AXMTranslatedText : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double confidence;
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence;
@property (retain, nonatomic) NSLocale *targetLocale;

+ (id)text:(id)a0 confidence:(double)a1 isLowConfidence:(BOOL)a2 targetLocale:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
