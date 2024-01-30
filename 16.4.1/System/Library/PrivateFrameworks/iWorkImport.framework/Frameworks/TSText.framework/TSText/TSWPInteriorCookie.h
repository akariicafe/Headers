@class TSDWrapSegments, TSWPColumn, TSDLayout;
@protocol TSWPLayoutTarget;

@interface TSWPInteriorCookie : NSObject

@property (weak, nonatomic) TSWPColumn *column;
@property (weak, nonatomic) TSDLayout<TSWPLayoutTarget> *layout;
@property (retain, nonatomic) TSDWrapSegments *interiorWrapSegmentsInWrapSpace;

- (void).cxx_destruct;

@end
