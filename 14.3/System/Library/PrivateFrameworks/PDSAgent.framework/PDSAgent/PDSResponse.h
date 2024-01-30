@class NSDictionary;

@interface PDSResponse : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDictionary *statusByUser;
@property (readonly, nonatomic) long long ttl;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatus:(long long)a0 statusByUser:(id)a1 ttl:(long long)a2;

@end
