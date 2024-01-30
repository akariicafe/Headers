@interface LightweightTimerEntry : NSObject

@property (retain, nonatomic) id userParam;
@property (nonatomic) unsigned long long slotNum;
@property (nonatomic) unsigned int seqNo;

- (id)description;
- (void).cxx_destruct;

@end
