@class NSString;

@interface HKSignedClinicalDataQRSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *dataValue;
@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) long long numberOfExpectedSiblings;
@property (readonly, copy, nonatomic) NSString *fullQRCodeValue;

+ (id)segmentFromQRCodeValue:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataValue:(id)a0 position:(long long)a1 numberOfExpectedSiblings:(long long)a2;

@end
