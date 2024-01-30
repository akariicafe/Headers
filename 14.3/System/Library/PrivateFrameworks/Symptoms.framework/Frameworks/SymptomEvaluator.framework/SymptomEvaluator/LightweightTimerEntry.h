@interface LightweightTimerEntry : NSObject

@property (retain, nonatomic) id userParam;
@property (nonatomic) unsigned long long slotNum;
@property (nonatomic) unsigned int seqNo;

- (void).cxx_destruct;
- (id)description;

@end
