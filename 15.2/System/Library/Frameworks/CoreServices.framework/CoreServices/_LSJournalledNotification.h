@class NSArray, NSDictionary;

@interface _LSJournalledNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int notification;
@property (readonly, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) BOOL includePlugins;
@property (readonly, nonatomic) NSDictionary *options;

- (id)initWithNotification:(int)a0 bundleIDs:(id)a1 plugins:(BOOL)a2 options:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
