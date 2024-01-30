@class NSString, GEOMapItemIdentifier, GEOMapServiceTraits;

@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {
    NSString *_vendorIdentifier;
    GEOMapItemIdentifier *_mapItemIdentifier;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    GEOMapServiceTraits *_traits;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithVendorIdentifier:(id)a0 mapItemIdentifier:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 traits:(id)a3;

@end
