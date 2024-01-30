@interface AVVCAlertInformation : NSObject

@property (nonatomic) int type;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long alertEndTime;

- (id)initWithAlertType:(int)a0 mode:(long long)a1 endTime:(unsigned long long)a2;

@end
