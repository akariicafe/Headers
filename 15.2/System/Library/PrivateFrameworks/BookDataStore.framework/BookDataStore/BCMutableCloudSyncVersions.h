@class NSString, NSPersistentHistoryToken;

@interface BCMutableCloudSyncVersions : NSObject <BCCloudSyncVersions, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSPersistentHistoryToken *historyToken;
@property (nonatomic) long long historyTokenOffset;
@property (nonatomic) long long cloudVersion;
@property (nonatomic) long long localVersion;
@property (nonatomic) long long syncVersion;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudSyncVersions:(id)a0;

@end
