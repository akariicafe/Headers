@class NSArray, NSDate;

@interface PKPassShareTimeConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long support;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSArray *schedules;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)encodeWithCoder:(id)a0;
- (id)intersect:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPassShareTimeConfiguration:(id)a0;

@end
