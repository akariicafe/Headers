@interface PKCoreSpotlightUtilities : NSObject

+ (id)spotlightIdentifierForTransactionIdentifier:(id)a0;
+ (id)spotlightIdentifierForPassUniqueIdentifier:(id)a0;
+ (void)searchableItemForPass:(id)a0 completion:(id /* block */)a1;
+ (struct CGSize { double x0; double x1; })_thumbnailImageSizeForSourceImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)searchableItemForTransaction:(id)a0 passUniqueIdentifier:(id)a1 regions:(id)a2 tags:(id)a3 keywords:(id)a4 imageGenerator:(id)a5 contactResolver:(id)a6 completion:(id /* block */)a7;
+ (id)passUniqueIdentifierFromSpotlightIdentifier:(id)a0;
+ (id)transactionIdentifierFromSpotlightIdentifier:(id)a0;

@end
