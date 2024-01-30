@interface NFMIDSMessageInstance : NSObject

@property (nonatomic) long long retryCount;
@property (nonatomic) double retryInterval;
@property (copy, nonatomic) id /* block */ retryAction;

+ (id)newMessageInstanceWithAction:(id /* block */)a0 retryCount:(long long)a1 retryInterval:(double)a2;

- (void).cxx_destruct;
- (id)description;

@end
