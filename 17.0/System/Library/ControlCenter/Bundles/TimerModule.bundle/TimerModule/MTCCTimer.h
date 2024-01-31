@class NSUUID, NSString, NSDate;

@interface MTCCTimer : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *timerID;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double duration;
@property (nonatomic) double remainingTime;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSString *timerLabel;
@property (retain, nonatomic) MTCCTimer *editingTimer;

- (id)initWithState:(unsigned long long)a0 duration:(double)a1;
- (unsigned long long)hash;
- (id)initWithMTTimer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
