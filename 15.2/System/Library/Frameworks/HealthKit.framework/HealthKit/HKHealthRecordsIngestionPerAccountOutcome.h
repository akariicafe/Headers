@class NSUUID;

@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, nonatomic) unsigned long long info;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 info:(unsigned long long)a1;
- (id)formattedInfoStringJoinedByString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
