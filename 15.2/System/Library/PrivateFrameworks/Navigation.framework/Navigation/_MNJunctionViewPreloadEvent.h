@class GEOComposedGuidanceEvent;

@interface _MNJunctionViewPreloadEvent : NSObject

@property (retain, nonatomic) GEOComposedGuidanceEvent *junctionViewEvent;
@property (nonatomic) BOOL needsPreload;

- (void).cxx_destruct;

@end
