@class NSData, NSDictionary;

@interface MSPVectorTimestamp : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_timestampValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly, nonatomic, getter=_timestampValues) NSDictionary *timestampValues;

+ (id)timestampAfterTimestamps:(id)a0 increasingClientIdentifier:(id)a1;

- (id)initWithSerializedRepresentation:(id)a0;
- (BOOL)_compare:(id)a0 comparisonResult:(out long long *)a1 isOppositeCheck:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithTimestampValues:(id)a0;
- (id)timestampIncreasingClientIdentifier:(id)a0;
- (id)description;
- (id)initInitialTimestampWithClientIdentifier:(id)a0;
- (long long)compare:(id)a0 isComparable:(out BOOL *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)compare:(id)a0 comparisonResult:(out long long *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
