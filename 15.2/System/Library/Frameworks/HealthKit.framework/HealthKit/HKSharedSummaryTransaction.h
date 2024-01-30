@class NSUUID, NSString, NSDictionary, NSDate;

@interface HKSharedSummaryTransaction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *sourceDeviceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (id)_initWithUUID:(id)a0 sourceDeviceIdentifier:(id)a1 metadata:(id)a2;
- (id)description;
- (void)_setSourceDeviceIdentifier:(id)a0;
- (void)_setCreationDate:(id)a0;
- (void)addMetadata:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
