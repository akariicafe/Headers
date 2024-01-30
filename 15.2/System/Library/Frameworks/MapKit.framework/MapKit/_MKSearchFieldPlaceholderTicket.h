@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceSearchFieldPlaceholderTicket;

@interface _MKSearchFieldPlaceholderTicket : NSObject <MKMapServiceSearchFieldPlaceholderTicket> {
    id<GEOMapServiceSearchFieldPlaceholderTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
