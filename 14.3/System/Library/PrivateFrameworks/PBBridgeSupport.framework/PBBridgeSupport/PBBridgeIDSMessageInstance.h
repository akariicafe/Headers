@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject

@property (retain, nonatomic) NSNumber *sentAbsoluteTime;
@property (nonatomic) unsigned short typeID;
@property (nonatomic) long long retryCount;
@property (nonatomic) double retryInterval;
@property (copy, nonatomic) id /* block */ retryAction;

+ (id)newMessageInstanceOfType:(unsigned short)a0 retryCount:(long long)a1 retryInterval:(double)a2 withAction:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
