@class NSDateComponents;

@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying>

@property (retain, nonatomic) NSDateComponents *startTime;
@property (retain, nonatomic) NSDateComponents *endTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
