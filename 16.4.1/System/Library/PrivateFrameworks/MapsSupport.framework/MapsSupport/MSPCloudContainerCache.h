@class NSString, NSMutableDictionary, NSMutableSet, NSDictionary, NSSet, CKServerChangeToken;

@interface MSPCloudContainerCache : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cacheName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long accountEnvironment;
@property (retain, nonatomic) NSMutableDictionary *stagedRecords;
@property (retain, nonatomic) NSMutableSet *stagedTombstones;
@property (retain, nonatomic) NSDictionary *cachedRecords;
@property (retain, nonatomic) NSSet *cachedTombstoneRecords;
@property (retain, nonatomic) CKServerChangeToken *serverToken;

- (void)merge;
- (void)encodeWithCoder:(id)a0;
- (void)load;
- (id)initWithCoder:(id)a0;
- (void)save;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)cacheURL;
- (id)initWithName:(id)a0 accountIdentifier:(id)a1;
- (void)addRecord:(id)a0 withIdentifier:(id)a1;
- (void)addRecordsFromChangeSet:(id)a0;
- (id)cachedRecordForIdentifier:(id)a0;
- (id)cachedRecordForRecord:(id)a0;
- (BOOL)hasRecord:(id)a0 withIdentifier:(id)a1;
- (id)initWithName:(id)a0 accountIdentifier:(id)a1 accountEnvironment:(long long)a2;

@end
