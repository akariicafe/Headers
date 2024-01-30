@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator

+ (unsigned int)pixelFormat;
+ (unsigned long long)numberOfChannels;
+ (int)clusteringConfidence;
+ (void /* function */ *)faceDescriptorCreator;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceBoundingBox:(id)a0;
+ (void /* function */ *)getFaceJunkClassifier;
+ (float)magnifiedBBoxScaleFactor;
+ (id)modelPath;

@end
