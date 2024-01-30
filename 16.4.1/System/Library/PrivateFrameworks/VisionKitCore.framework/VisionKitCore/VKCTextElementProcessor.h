@interface VKCTextElementProcessor : NSObject

+ (id)dataDetectorElementFromVNBarcodeObservation:(id)a0 loggingIndex:(long long)a1;
+ (id)dataDetectorsFromCRDocumentOutputRegion:(id)a0 shouldFilter:(BOOL)a1;
+ (id)textElementsFromCRDocumentOutputRegion:(id)a0;

@end
