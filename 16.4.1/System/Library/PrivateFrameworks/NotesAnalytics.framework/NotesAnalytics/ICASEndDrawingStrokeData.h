@class NSString, NSNumber;

@interface ICASEndDrawingStrokeData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *endPencilStrokeCount;
@property (readonly, nonatomic) NSNumber *endFingerStrokeCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithEndPencilStrokeCount:(id)a0 endFingerStrokeCount:(id)a1;

@end
