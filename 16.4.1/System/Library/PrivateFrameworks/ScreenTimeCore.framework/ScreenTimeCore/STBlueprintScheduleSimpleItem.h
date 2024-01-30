@class NSDateComponents;

@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying>

@property (retain, nonatomic) NSDateComponents *startTime;
@property (retain, nonatomic) NSDateComponents *endTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
