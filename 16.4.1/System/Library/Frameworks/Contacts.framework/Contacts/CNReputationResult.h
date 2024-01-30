@class CNReputationHandle;

@interface CNReputationResult : NSObject

@property (readonly, copy) CNReputationHandle *handle;
@property (readonly) long long score;

+ (id)descriptionForScore:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 score:(long long)a1;

@end
