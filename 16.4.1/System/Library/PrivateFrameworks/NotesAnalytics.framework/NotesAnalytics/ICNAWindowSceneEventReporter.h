@class NSString;

@interface ICNAWindowSceneEventReporter : ICNAEventReporter

@property (nonatomic) double previousArea;
@property (readonly, nonatomic) NSString *windowSceneID;
@property (readonly, nonatomic) NSString *saltedInstrumentationID;

+ (double)areaOfWindowScene:(id)a0;

- (void).cxx_destruct;
- (id)initWithSubTrackerName:(id)a0 windowScene:(id)a1;
- (void)startWindowSceneEventDurationTracking;
- (void)submitWindowSceneEvent;
- (void)submitWindowSceneResizeEventIfNecessaryWithWindowScene:(id)a0 forceSubmit:(BOOL)a1;

@end
