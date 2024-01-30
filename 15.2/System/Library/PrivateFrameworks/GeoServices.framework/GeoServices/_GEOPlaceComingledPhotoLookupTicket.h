@class NSString, GEOMapItemIdentifier, GEOMapServiceTraits;

@interface _GEOPlaceComingledPhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {
    NSString *_categoryIdentifier;
    GEOMapItemIdentifier *_mapItemIdentifier;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    GEOMapServiceTraits *_traits;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPhotoCategoryIdentifier:(id)a0 mapItemIdentifier:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 traits:(id)a3;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;

@end
