@interface AMSUICardMetadata : NSObject

+ (id)_cardArtworkForPaymentPass:(id)a0 width:(double)a1;
+ (id)_passesForPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
+ (id)appleCardIcon;
+ (id)appleCardIconString;
+ (id)metadataForPassTypeIdentifier:(id)a0 serialNumber:(id)a1 cardArtworkSize:(id)a2;
+ (void)metadataForPassTypeIdentifier:(id)a0 serialNumber:(id)a1 cardArtworkSize:(id)a2 completionHandler:(id /* block */)a3;

@end
