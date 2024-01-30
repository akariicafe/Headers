@class CNReputationHandle;

@interface CNReputationResult : NSObject

@property (readonly, copy) CNReputationHandle *handle;
@property (readonly) long long score;

+ (id)descriptionForScore:(long long)a0;

- (id)initWithHandle:(id)a0 score:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
