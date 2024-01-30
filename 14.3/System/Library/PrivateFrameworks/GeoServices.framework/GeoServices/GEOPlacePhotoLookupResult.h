@class NSArray, GEOMapItemIdentifier, NSString;

@interface GEOPlacePhotoLookupResult : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _originalRange;
}

@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) long long nextStartIndex;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) NSString *vendorIdentifier;
@property (readonly, nonatomic) unsigned long long totalPhotoCount;

- (void).cxx_destruct;
- (id)initWithVendorIdentifier:(id)a0 place:(id)a1 mapItemItemIdentifier:(id)a2 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
