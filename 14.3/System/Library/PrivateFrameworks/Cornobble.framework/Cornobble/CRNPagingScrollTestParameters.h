@class NSString, RCPSyntheticEventStream;

@interface CRNPagingScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters>

@property (readonly, nonatomic) long long realDirection;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) double amplitude;
@property (nonatomic) long long direction;
@property (nonatomic) double iterationDuration;
@property (nonatomic) BOOL useFlicks;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (copy, nonatomic) NSString *testName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
