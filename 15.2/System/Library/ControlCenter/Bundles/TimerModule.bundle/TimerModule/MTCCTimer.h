@class NSDate;

@interface MTCCTimer : NSObject <NSCopying>

@property (nonatomic) unsigned long long state;
@property (nonatomic) double duration;
@property (nonatomic) double remainingTime;
@property (copy, nonatomic) NSDate *fireDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
