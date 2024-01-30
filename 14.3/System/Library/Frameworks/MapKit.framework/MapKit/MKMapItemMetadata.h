@class NSMutableDictionary, GEOBusiness;

@interface MKMapItemMetadata : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (readonly, nonatomic) GEOBusiness *business;

- (void).cxx_destruct;
- (id)imageForURL:(id)a0;
- (id)description;
- (id)initWithBusiness:(id)a0;
- (void)addImage:(id)a0 forURL:(id)a1;

@end
