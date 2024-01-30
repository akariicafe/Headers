@interface DCMarkupUtilities : NSObject

+ (BOOL)hasPrivateImageMetadata:(id)a0;
+ (id)cleanImageMetadataFromData:(id)a0;
+ (id)createMarkupViewController;
+ (id)imageDataWithMarkupModelData:(id)a0 sourceImageData:(id)a1 embedData:(BOOL)a2;
+ (id)createProcessingMarkupViewControllerOutWindow:(id *)a0;
+ (id)markupModelDataFromDataAtURL:(id)a0;
+ (id)imageDataWithMarkupModelData:(id)a0 sourceImageData:(id)a1;
+ (id)imageDataWithMarkupModelData:(id)a0 sourceImageURL:(id)a1;
+ (id)markupModelDataFromData:(id)a0;
+ (id)dataToEditForDocumentInfo:(id)a0 includeMarkupModelData:(BOOL)a1 imageCache:(id)a2 embedMarkupModelDataInImage:(BOOL)a3;
+ (id)dataToEditForDocumentInfo:(id)a0 imageCache:(id)a1 includeMarkupModelData:(BOOL)a2;
+ (void)applyMarkupModelData:(id)a0 documentInfo:(id)a1 completionBlock:(id /* block */)a2;
+ (void)applyReturnedMarkupURL:(id)a0 documentInfo:(id)a1 completionBlock:(id /* block */)a2;
+ (void)extractReturnedMarkupURL:(id)a0 documentInfo:(id)a1 completionBlock:(id /* block */)a2;

@end
