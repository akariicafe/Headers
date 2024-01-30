@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceCitySelectorViewTicket;

@interface _MKCitySelectorViewTicket : NSObject <MKMapServiceCitySelectorViewTicket> {
    id<GEOMapServiceCitySelectorViewTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
