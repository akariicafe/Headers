@class NSString, NSDictionary, NSDate;

@interface PBFDataRefreshContext : NSObject

@property (readonly, nonatomic) NSString *component;
@property (readonly, nonatomic) NSDate *now;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (readonly, nonatomic) NSDictionary *userInfo;

+ (id)staticDescriptorsRefreshContextForNow:(id)a0 extension:(id)a1;
+ (id)dynamicDescriptorsRefreshContextForNow:(id)a0 extension:(id)a1 lastRefreshDate:(id)a2 refreshStrategy:(long long)a3;

- (id)initWithComponent:(id)a0 now:(id)a1 lastRefreshDate:(id)a2 userInfo:(id)a3;
- (void).cxx_destruct;

@end
