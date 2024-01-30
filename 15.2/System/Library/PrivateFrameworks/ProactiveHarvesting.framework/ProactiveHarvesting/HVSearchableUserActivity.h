@class NSString, CSSearchableItem, NSUserActivity;

@interface HVSearchableUserActivity : NSObject <BMIdentifiableContentEvent>

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;

- (id)initWithUserActivity:(id)a0 uniqueId:(id)a1 searchableItem:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
