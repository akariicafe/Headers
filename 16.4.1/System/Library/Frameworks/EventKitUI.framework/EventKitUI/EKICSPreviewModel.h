@class NSArray, EKEventStore, NSData, NSMutableArray;

@interface EKICSPreviewModel : NSObject {
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    unsigned long long _options;
    unsigned long long _actionsState;
}

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) unsigned long long totalEventCount;
@property (readonly, nonatomic) unsigned long long importedEventCount;
@property (readonly, nonatomic) unsigned long long unimportedEventCount;
@property (readonly, nonatomic) unsigned long long actionsState;
@property (readonly, nonatomic) NSArray *importedEvents;
@property (readonly, nonatomic) NSArray *unimportedEvents;
@property (readonly, nonatomic) NSArray *allEvents;
@property (readonly, nonatomic) BOOL shouldUpdate;

- (void).cxx_destruct;
- (id)importAllIntoCalendar:(id)a0;
- (id)importEvent:(id)a0 intoCalendar:(id)a1;
- (id)initWithICSData:(id)a0 eventStore:(id)a1 options:(unsigned long long)a2;

@end
