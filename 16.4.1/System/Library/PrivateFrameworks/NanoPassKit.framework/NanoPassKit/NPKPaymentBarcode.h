@class NSString, NSData, NSArray;

@interface NPKPaymentBarcode : NSObject

@property (retain, nonatomic) NSString *barcodeIdentifier;
@property (retain, nonatomic) NSData *decryptedBarcodeCredential;
@property (retain, nonatomic) NSArray *barcodes;
@property (nonatomic) unsigned long long state;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBarcodeIdentifier:(id)a0 decryptedBarcodeCredential:(id)a1 error:(id)a2;

@end
