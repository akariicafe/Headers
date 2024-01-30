@class NSUUID;

@interface HDSeriesFreezeResult : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSUUID *frozenIdentifier;

- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 frozenIdentifier:(id)a1;

@end
