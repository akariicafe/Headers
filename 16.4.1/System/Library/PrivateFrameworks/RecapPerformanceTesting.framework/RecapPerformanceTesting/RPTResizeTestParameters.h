@class NSString, UIWindow, RPTCoordinateSpaceConverter;

@interface RPTResizeTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>

@property (copy, nonatomic) NSString *testName;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) struct CGSize { double width; double height; } minimumWindowSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumWindowSize;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)composerBlock;
- (void)prepareWithComposer:(id)a0;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;

@end
