@class NSDate;

@interface mbufRecord : NSObject

@property (readonly, nonatomic) NSDate *reportTime;
@property (readonly, nonatomic) unsigned long long mbuf256BTotal;
@property (readonly, nonatomic) unsigned long long mbuf2KBTotal;
@property (readonly, nonatomic) unsigned long long mbuf4KBTotal;
@property (readonly, nonatomic) unsigned long long mbuf16KBTotal;
@property (readonly, nonatomic) unsigned long long sockMBcnt;
@property (readonly, nonatomic) unsigned long long sockAtMBLimit;
@property (readonly, nonatomic) unsigned long long mbufMemReleased;
@property (readonly, nonatomic) unsigned long long mbufDrainCount;
@property (readonly, nonatomic) unsigned long long sockSbMBFloor;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReport:(id)a0;
- (BOOL)isHighWaterMarkGiven:(id)a0;

@end
