@class NSSet;

@interface ATXExpiredData : NSObject

@property (readonly, nonatomic) NSSet *expiredBundleIds;
@property (readonly, nonatomic) NSSet *expiredActionKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExpiredBundleIds:(id)a0 expiredActionKeys:(id)a1;

@end
