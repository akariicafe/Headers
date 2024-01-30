@class NSString;

@interface CBProductInfo : NSObject

@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, nonatomic) unsigned int radarComponentID;
@property (readonly, copy, nonatomic) NSString *sfSymbolNameCase;
@property (readonly, copy, nonatomic) NSString *sfSymbolNameMain;
@property (readonly, nonatomic) unsigned short vendorIDBluetooth;
@property (readonly, nonatomic) unsigned short vendorIDUSB;

+ (id)productInfoWithProductID:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithProductInfoPtr:(const struct { unsigned int x0; id x1; unsigned int x2; id x3; unsigned int x4; id x5; id x6; unsigned short x7; unsigned short x8; } *)a0;

@end
