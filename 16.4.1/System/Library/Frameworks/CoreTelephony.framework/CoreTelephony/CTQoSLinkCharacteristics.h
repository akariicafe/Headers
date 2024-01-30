@class NSNumber;

@interface CTQoSLinkCharacteristics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *bitRateMaxUL;
@property (retain, nonatomic) NSNumber *bitRateMaxDL;
@property (retain, nonatomic) NSNumber *bitRateGuaranteedUL;
@property (retain, nonatomic) NSNumber *bitRateGuaranteedDL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
