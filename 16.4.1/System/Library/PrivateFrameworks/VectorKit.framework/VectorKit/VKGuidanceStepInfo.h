@class NSString;

@interface VKGuidanceStepInfo : NSObject

@property (readonly, retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) int routePoint;

- (void).cxx_destruct;
- (id)initWithRoadName:(id)a0 point:(int)a1;

@end
