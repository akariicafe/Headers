@class NSUUID;

@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, nonatomic) unsigned long long info;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountIdentifier:(id)a0 info:(unsigned long long)a1;
- (id)formattedInfoStringJoinedByString:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
