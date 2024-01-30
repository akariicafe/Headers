@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceSearchHomeTicket;

@interface _MKSearchHomeTicket : NSObject <MKMapServiceSearchHomeTicket> {
    id<GEOMapServiceSearchHomeTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
