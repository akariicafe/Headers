@class NSString;
@protocol NURenderStatistics;

@interface _PIParallaxLayoutInactiveFrameResult : _NURenderResult <PIParallaxLayoutInactiveFrameResult>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
