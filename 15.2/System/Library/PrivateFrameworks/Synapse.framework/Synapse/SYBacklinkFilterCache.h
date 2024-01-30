@class NSArray, NSMutableArray, NSData;

@interface SYBacklinkFilterCache : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *activityTypes;
@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (void)finalize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithActivityTypes:(id)a0;
- (void)addEntriesForItem:(id)a0;
- (BOOL)containsMatchingEntriesForItem:(id)a0;

@end
