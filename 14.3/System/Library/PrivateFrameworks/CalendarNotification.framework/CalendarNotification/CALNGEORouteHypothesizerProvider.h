@class NSString;

@interface CALNGEORouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>

@property (class, readonly, nonatomic) CALNGEORouteHypothesizerProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
