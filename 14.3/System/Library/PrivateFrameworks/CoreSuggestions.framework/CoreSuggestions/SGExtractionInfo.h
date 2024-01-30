@class NSNumber;

@interface SGExtractionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long extractionType;
@property (readonly, nonatomic) NSNumber *modelVersion;
@property (readonly, nonatomic) NSNumber *confidence;

+ (id)extractionInfoWithExtractionType:(unsigned long long)a0 modelVersion:(id)a1 confidence:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtractionType:(unsigned long long)a0 modelVersion:(id)a1 confidence:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
