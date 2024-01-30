@class NSString, NSNumber, RPTCoordinateSpaceConverter;

@interface RPTDirectionalSwipeTestParameters : NSObject <RPTTestParameters>

@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) long long direction;
@property (nonatomic) long long swipeCount;
@property (retain, nonatomic) NSNumber *swipeSpeedFactor;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic) BOOL shouldFlick;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
