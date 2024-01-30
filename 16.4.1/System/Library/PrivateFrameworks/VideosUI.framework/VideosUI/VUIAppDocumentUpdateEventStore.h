@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (void)removeEvent:(id)a0;
- (void)addEvent:(id)a0;
- (void)removeAllEvents;
- (void)addEvents:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
