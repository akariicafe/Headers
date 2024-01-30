@class NSMeasurement;

@interface HDBound : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMeasurement *value;
@property (nonatomic) BOOL open;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0 open:(BOOL)a1;
- (BOOL)isEqualToBound:(id)a0;

@end
