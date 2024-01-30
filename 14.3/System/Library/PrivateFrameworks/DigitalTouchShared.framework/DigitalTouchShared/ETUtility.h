@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)a0;
+ (id)removePrefixFromDestination:(id)a0;
+ (id)destinationFromMessageIdentifier:(id)a0 keepPrefix:(BOOL)a1;
+ (BOOL)isRetailDemo;
+ (BOOL)shouldArchiveSentMessages;
+ (long long)lastInteractiveZoomLevel;
+ (id)imageWithEllipseDiameter:(double)a0 strokeWidth:(double)a1 strokeColor:(id)a2 fillDiameter:(double)a3 fillColor:(id)a4 edgeOverlap:(double)a5;

@end
