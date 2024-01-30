@class NSString, NSArray, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsFakeFlightRequester : NSObject <MapsSuggestionsFlightRequester> {
    struct ReadWriteQueue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _rwQueue;
    NSArray *_configuredFlights;
    NSError *_configuredError;
    unsigned long long _calledRequestFlights;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)requestFlightsWithFullFlightNumber:(id)a0 departureDate:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)configureFlights:(id)a0;
- (unsigned long long)calledRequestFlights;
- (id).cxx_construct;
- (void)configureError:(id)a0;

@end
