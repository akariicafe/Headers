@class NSString, HDBound;

@interface HDLimit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HDBound *upperBound;
@property (copy, nonatomic) HDBound *lowerBound;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToLimit:(id)a0;
- (BOOL)measurementWithinBounds:(id)a0;

@end
