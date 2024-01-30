@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)a0;
+ (id)destinationFromMessageIdentifier:(id)a0 keepPrefix:(BOOL)a1;
+ (id)imageWithEllipseDiameter:(double)a0 strokeWidth:(double)a1 strokeColor:(id)a2 fillDiameter:(double)a3 fillColor:(id)a4 edgeOverlap:(double)a5;
+ (BOOL)isRetailDemo;
+ (long long)lastInteractiveZoomLevel;
+ (id)removePrefixFromDestination:(id)a0;
+ (BOOL)shouldArchiveSentMessages;

@end
