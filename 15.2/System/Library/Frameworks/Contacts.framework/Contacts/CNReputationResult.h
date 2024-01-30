@class CNReputationHandle;

@interface CNReputationResult : NSObject

@property (readonly, copy) CNReputationHandle *handle;
@property (readonly) long long score;

+ (id)descriptionForScore:(long long)a0;

- (id)description;
- (id)initWithHandle:(id)a0 score:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
