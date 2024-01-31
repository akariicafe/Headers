@class CNContactFetchRequest;
@protocol CNTimeProvider, CNAPITriageLogger;

@interface CNAPITriageSession : NSObject {
    double _timeSessionBegan;
    double _timeSessionEnded;
    double _clientCalloutTime;
    BOOL _hasClientCalloutTime;
}

@property (readonly) CNContactFetchRequest *request;
@property (readonly) id<CNAPITriageLogger> logger;
@property (readonly) id<CNTimeProvider> timeProvider;

- (void)close;
- (id)init;
- (void)open;
- (id)normalizeCollectionOfContacts:(id)a0;
- (void)closeWithError:(id)a0;
- (void)closeWithContacts:(id)a0 orError:(id)a1;
- (void)addClientCalloutTime:(double)a0;
- (void)closeWithContacts:(id)a0;
- (id)initWithRequest:(id)a0 triageLogger:(id)a1 timeProvider:(id)a2;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)closeWithResult:(id)a0;

@end
