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

- (id)initWithRequest:(id)a0;
- (void)addClientCalloutTime:(double)a0;
- (void)closeWithContacts:(id)a0 orError:(id)a1;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)closeWithError:(id)a0;
- (id)initWithRequest:(id)a0 triageLogger:(id)a1 timeProvider:(id)a2;
- (void)closeWithResult:(id)a0;
- (void)open;
- (void)closeWithContacts:(id)a0;

@end
