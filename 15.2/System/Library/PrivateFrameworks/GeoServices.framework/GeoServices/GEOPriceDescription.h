@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject

@property (retain, nonatomic) GEOPDPriceDescription *geoPriceDescription;
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (readonly, nonatomic) NSString *priceDescription;

- (id)initWithGEOPDPriceDescription:(id)a0;
- (void).cxx_destruct;

@end
