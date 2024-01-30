@class NSMutableDictionary, GEOBusiness;

@interface MKMapItemMetadata : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (readonly, nonatomic) GEOBusiness *business;

- (id)imageForURL:(id)a0;
- (id)initWithBusiness:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addImage:(id)a0 forURL:(id)a1;

@end
