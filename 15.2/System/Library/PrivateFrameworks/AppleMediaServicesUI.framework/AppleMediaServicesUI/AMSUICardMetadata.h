@interface AMSUICardMetadata : NSObject

+ (id)appleCardIcon;
+ (id)_passesForPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
+ (id)_cardArtworkForPaymentPass:(id)a0 width:(double)a1;
+ (id)appleCardIconString;
+ (id)metadataForPassTypeIdentifier:(id)a0 serialNumber:(id)a1 cardArtworkSize:(id)a2;

@end
