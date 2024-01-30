@class NSString, NSNumber;

@interface ICASStartDrawingStrokeData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *startPencilStrokeCount;
@property (readonly, nonatomic) NSNumber *startFingerStrokeCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithStartPencilStrokeCount:(id)a0 startFingerStrokeCount:(id)a1;

@end
