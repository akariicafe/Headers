@class NSString, HDLimit, NSMeasurement;

@interface HDMeasuredResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HDLimit *limit;
@property (readonly, copy, nonatomic) NSMeasurement *measurement;
@property (readonly, nonatomic) BOOL valueWithinLimits;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 measurement:(id)a1;
- (BOOL)isEqualToMeasuredResult:(id)a0;

@end
