@interface _LTTranslationStatistics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long inputTokenCount;
@property (nonatomic) long long inputSubtokenCount;

+ (long long)_countWithTokenString:(id)a0 countCharacters:(BOOL)a1;
+ (id)statisticsWithEngineMeta:(id)a0 locale:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
