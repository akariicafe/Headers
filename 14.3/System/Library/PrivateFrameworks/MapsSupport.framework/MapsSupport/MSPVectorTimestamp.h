@class NSData, NSDictionary;

@interface MSPVectorTimestamp : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_timestampValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly, nonatomic, getter=_timestampValues) NSDictionary *timestampValues;

+ (id)timestampAfterTimestamps:(id)a0 increasingClientIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initInitialTimestampWithClientIdentifier:(id)a0;
- (BOOL)compare:(id)a0 comparisonResult:(out long long *)a1;
- (BOOL)_compare:(id)a0 comparisonResult:(out long long *)a1 isOppositeCheck:(BOOL)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithTimestampValues:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0 isComparable:(out BOOL *)a1;
- (id)timestampIncreasingClientIdentifier:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
