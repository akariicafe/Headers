@class NSArray, NSString, PLEntryNotificationOperatorComposition, NSSet;

@interface PLAirplayService : PLService

@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback;
@property (retain) PLEntryNotificationOperatorComposition *audioAppCallback;
@property (retain) NSArray *screenLayoutEntries;
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState;
@property BOOL airplayMirroringOn;
@property (retain) NSSet *excludedAccountingEvents;

+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (void)load;

- (void)handleAudioAppCallback:(id)a0;
- (id)buildCallBack:(id)a0 withGroup:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)testService;
- (void).cxx_destruct;
- (id)init;
- (void)handleScreenStateCallback:(id)a0;
- (void)initOperatorDependancies;

@end
