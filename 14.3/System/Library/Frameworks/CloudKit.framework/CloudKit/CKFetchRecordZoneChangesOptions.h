@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL fetchNewestChangesFirst;
@property (nonatomic) BOOL fetchChangesMadeByThisDevice;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)zoneConfiguration;
- (id)initWithZoneConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
