@class NSDictionary, CalSingleDatabaseInMemoryChangeTimestamp;

@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying> {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timestampForNow;

- (void)encodeWithCoder:(id)a0;
- (id)timestampForDatabase:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)allDatabases;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTimestamps:(id)a0;

@end
