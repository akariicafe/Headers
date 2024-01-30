@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) double xValue;
@property (readonly, nonatomic) long long yValue;
@property (readonly, nonatomic) BOOL groupToPrevious;
@property (readonly, nonatomic) long long markStyle;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithXValue:(double)a0 yValue:(long long)a1 groupToPrevious:(BOOL)a2 markStyle:(long long)a3 userInfo:(id)a4;

@end
