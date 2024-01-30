@class NSString, NSNumber;

@interface WALocationListPositionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *position;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithPosition:(id)a0;

@end
