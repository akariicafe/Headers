@class NSString, NSArray, INDateComponentsRange;

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INDateComponentsRange *recordDate;
@property (readonly, copy, nonatomic) NSString *unit;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) long long resultType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithRecordDate:(id)a0 unit:(id)a1 values:(id)a2 resultType:(long long)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
