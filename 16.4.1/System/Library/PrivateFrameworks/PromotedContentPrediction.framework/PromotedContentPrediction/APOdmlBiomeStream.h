@class NSString, BMStoreStream, NSDate, BMStoreConfig, NSNumber;

@interface APOdmlBiomeStream : NSObject

@property (retain, nonatomic) BMStoreConfig *config;
@property (retain, nonatomic) NSString *streamName;
@property (retain, nonatomic) BMStoreStream *stream;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSNumber *maxEvents;
@property (nonatomic) BOOL reverse;
@property (retain, nonatomic) NSDate *startDate;

- (id)publisher;
- (void)removeAllEvents;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)removeEvents:(id /* block */)a0;
- (id)_applicationSupportDirectory;
- (void)enumerateEvents:(id /* block */)a0;
- (void)enumerateEvents:(id)a0 result:(id /* block */)a1;
- (void)enumerateEventsWithDictionary:(id /* block */)a0;
- (void)filterEvents:(id /* block */)a0 result:(id /* block */)a1;
- (void)filterEventsWithDictionary:(id /* block */)a0 result:(id /* block */)a1;
- (void)removeEventsWithDictionary:(id /* block */)a0;
- (void)writeEvent:(id)a0;

@end
