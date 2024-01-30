@class UISplitViewController, NSString, RPTCoordinateSpaceConverter, UIViewController;

@interface RPTFluidSplitViewTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters> {
    UISplitViewController *_splitViewController;
    UIViewController *_supplementalController;
    UIViewController *_primaryController;
}

@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareWithComposer:(id)a0;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 splitViewController:(id)a1 completionHandler:(id /* block */)a2;

@end
