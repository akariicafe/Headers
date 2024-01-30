@class NSString, HDLimit, NSMeasurement;

@interface HDMeasuredResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HDLimit *limit;
@property (readonly, copy, nonatomic) NSMeasurement *measurement;
@property (readonly, nonatomic) BOOL valueWithinLimits;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 measurement:(id)a1;
- (BOOL)isEqualToMeasuredResult:(id)a0;

@end
