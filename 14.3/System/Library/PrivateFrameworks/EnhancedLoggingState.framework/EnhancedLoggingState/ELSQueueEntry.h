@class NSString, NSDictionary;

@interface ELSQueueEntry : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) double executeAfterDuration;
@property (nonatomic) BOOL retry;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 typeName:(id)a1 parameters:(id)a2 executeAfterDuration:(double)a3 retry:(BOOL)a4;

@end
