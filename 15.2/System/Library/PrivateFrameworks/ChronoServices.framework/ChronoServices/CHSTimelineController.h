@class NSString;
@protocol CHSChronoWidgetServiceServer;

@interface CHSTimelineController : NSObject {
    id<CHSChronoWidgetServiceServer> _server;
}

@property (readonly, copy, nonatomic) NSString *avocadoIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;

- (id)reloadTimeline;
- (id)reloadTimelineBudgetedWithReason:(id)a0;
- (id)reloadTimelineWithReason:(id)a0;
- (void).cxx_destruct;
- (id)reloadTimelineBudgeted;
- (id)initForAvocadoIdentifier:(id)a0 inBundleIdentifier:(id)a1;

@end
