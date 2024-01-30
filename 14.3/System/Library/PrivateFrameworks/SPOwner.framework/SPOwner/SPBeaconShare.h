@class NSUUID, SPHandle, NSString, NSDate;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) SPHandle *handle;
@property (nonatomic) BOOL accepted;
@property (copy, nonatomic) NSDate *expiration;
@property (copy, nonatomic) NSString *correlationIdentifier;
@property (readonly, copy, nonatomic) NSDate *shareDate;
@property (readonly, nonatomic) unsigned long long sharePrimaryIndex;

- (id)initWithIdentifier:(id)a0 handle:(id)a1 accepted:(BOOL)a2 expiration:(id)a3 correlationIdentifier:(id)a4 shareDate:(id)a5 sharePrimaryIndex:(unsigned long long)a6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
