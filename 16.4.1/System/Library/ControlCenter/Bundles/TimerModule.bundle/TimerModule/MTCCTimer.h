@class NSDate;

@interface MTCCTimer : NSObject <NSCopying>

@property (nonatomic) unsigned long long state;
@property (nonatomic) double duration;
@property (nonatomic) double remainingTime;
@property (copy, nonatomic) NSDate *fireDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
