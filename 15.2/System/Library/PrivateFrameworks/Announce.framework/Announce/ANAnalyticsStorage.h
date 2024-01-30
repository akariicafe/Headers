@class NSDictionary, NSMutableDictionary, ANDefaults;

@interface ANAnalyticsStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventPayloads;
@property (retain, nonatomic) ANDefaults *defaults;
@property (readonly) NSDictionary *eventsToReport;

- (void)_synchronizedSave;
- (void)erase;
- (void).cxx_destruct;
- (id)init;
- (void)save:(id)a0 counter:(id)a1;
- (id)initWithDefaults:(id)a0;
- (void)save:(id)a0 payload:(id)a1;

@end
