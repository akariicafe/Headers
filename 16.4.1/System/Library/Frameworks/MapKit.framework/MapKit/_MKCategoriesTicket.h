@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceCategoriesTicket;

@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket> {
    id<GEOMapServiceCategoriesTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
