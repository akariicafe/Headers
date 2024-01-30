@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject

@property (retain, nonatomic) GEOPDPriceDescription *geoPriceDescription;
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (readonly, nonatomic) NSString *priceDescription;

- (void).cxx_destruct;
- (id)initWithGEOPDPriceDescription:(id)a0;

@end
