@class NSString;

@interface ARDepthMapData : NSObject <ARResultData>

@property (retain, nonatomic) struct CGImage { } *depthMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
