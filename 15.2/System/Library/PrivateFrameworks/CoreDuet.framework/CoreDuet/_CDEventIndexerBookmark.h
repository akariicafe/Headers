@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding> {
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
    long long _version;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
