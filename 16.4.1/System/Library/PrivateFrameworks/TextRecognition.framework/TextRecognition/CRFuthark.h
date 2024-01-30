@interface CRFuthark : NSObject

+ (id)detectAndRecognizeTextInImage:(id)a0 options:(id)a1;
+ (id)detectAndRecognizeTextInImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2;
+ (id)detectAndRecognizeTextInImage:(id)a0 withMaxNumScales:(unsigned long long)a1 options:(id)a2 withProgressHandler:(id /* block */)a3;
+ (id)detectTextInImage:(id)a0 options:(id)a1;
+ (id)detectTextInImage:(id)a0 withMaxNumScales:(unsigned long long)a1 options:(id)a2;
+ (id)detectTextInImage:(id)a0 withMaxNumScales:(unsigned long long)a1 withThresholdingAlgorithm:(long long)a2 options:(id)a3;
+ (id)runFutharkOnImage:(id)a0 recognizeFeatures:(BOOL)a1 options:(id)a2;
+ (id)runFutharkOnImage:(id)a0 recognizeFeatures:(BOOL)a1 withMaxNumScales:(unsigned long long)a2 withThresholdingAlgorithm:(long long)a3 options:(id)a4 withProgressHandler:(id /* block */)a5;

@end
