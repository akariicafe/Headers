@interface VKCTextElementProcessor : NSObject

+ (id)textElementsFromCRDocumentOutputRegion:(id)a0;
+ (id)dataDetectorsFromCRDocumentOutputRegion:(id)a0 shouldFilter:(BOOL)a1;
+ (id)dataDetectorElementFromVNBarcodeObservation:(id)a0 loggingIndex:(long long)a1;

@end
