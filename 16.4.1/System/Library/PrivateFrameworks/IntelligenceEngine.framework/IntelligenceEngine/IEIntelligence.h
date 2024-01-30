@interface IEIntelligence : NSObject

@property (nonatomic) void *mIntelligence;

- (BOOL)load:(id)a0;
- (void)setExtensions:(id)a0;
- (id)processEvent:(id)a0;
- (void)dealloc;
- (BOOL)isActive;
- (id)init;
- (id)getBuildVersion;
- (id)getFormatVersion;
- (id)getUndo;
- (id)activeEvents;
- (id)find:(id)a0 withId:(id)a1;
- (id)findInTemplateDir:(id)a0 withId:(id)a1;
- (id)getEvents;
- (id)getExitValue;
- (id)getInputGroup:(id)a0;
- (id)getRemainingResponses;
- (BOOL)hasActiveFallback;
- (BOOL)load:(id)a0 withFlowId:(id)a1;
- (BOOL)load:(id)a0 withId:(id)a1;
- (BOOL)setVariable:(id)a0 withValue:(id)a1;
- (id)startConversation;
- (BOOL)loadFromString:(id)a0;
- (id)activeIntents;
- (id)activeLocalEvents;
- (id)activeLocalIntents;
- (id)getActiveEventsWithScope:(int)a0;
- (id)getActiveIntentsWithScope:(int)a0;
- (id)getConditions;
- (id)getIntents;
- (id)getVariables;
- (id)goTo:(id)a0;
- (id)processActivity:(id)a0;
- (id)processDirectInvocation:(id)a0;
- (id)processIntent:(id)a0;
- (BOOL)willHandleDirectInvocation:(id)a0;
- (BOOL)willHandleEvent:(id)a0;
- (BOOL)willHandleIntent:(id)a0;

@end
