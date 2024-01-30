@class NSString;

@interface _LTTranslationToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double confidence;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 confidence:(double)a1;
- (id)initWithOspreyToken:(id)a0;

@end
