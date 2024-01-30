@interface SBWakeEvent : NSObject

@property (nonatomic) unsigned long long eventAbsTimestamp;
@property (nonatomic) unsigned long long eventRecvContTimestamp;

- (id)initWithTimestamp:(unsigned long long)a0;

@end
