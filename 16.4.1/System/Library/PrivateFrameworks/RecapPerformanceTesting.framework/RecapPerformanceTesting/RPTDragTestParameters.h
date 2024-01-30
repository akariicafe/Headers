@class NSString, UIWindow, RPTCoordinateSpaceConverter;

@interface RPTDragTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>

@property (copy, nonatomic) NSString *testName;
@property (retain, nonatomic) UIWindow *window;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
