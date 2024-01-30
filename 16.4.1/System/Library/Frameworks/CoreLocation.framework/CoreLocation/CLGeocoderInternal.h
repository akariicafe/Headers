@class NSObject, CLSilo;
@protocol OS_dispatch_queue, GEOMapServiceTicket;

@interface CLGeocoderInternal : NSObject {
    id /* block */ _geocodeCompletionHandler;
    id<GEOMapServiceTicket> _ticket;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) CLSilo *responseSilo;

- (void)dealloc;
- (id)init;

@end
