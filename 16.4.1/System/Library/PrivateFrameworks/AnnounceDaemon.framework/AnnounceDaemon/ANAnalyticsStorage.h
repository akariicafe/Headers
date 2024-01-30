@class NSDictionary, NSMutableDictionary, ANDefaults;

@interface ANAnalyticsStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventPayloads;
@property (retain, nonatomic) ANDefaults *defaults;
@property (readonly) NSDictionary *eventsToReport;

- (id)initWithDefaults:(id)a0;
- (void)save:(id)a0 counter:(id)a1;
- (void)erase;
- (id)init;
- (void).cxx_destruct;
- (void)save:(id)a0 payload:(id)a1;
- (void)_synchronizedSave;

@end
