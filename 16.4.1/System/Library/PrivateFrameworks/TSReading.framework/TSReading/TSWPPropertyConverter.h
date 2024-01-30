@interface TSWPPropertyConverter : NSObject

+ (void)initialize;
+ (id)mapCharacterPropertiesFromNS:(id)a0;
+ (void)mapCharacterPropertiesFromNS:(id)a0 toWP:(id)a1;
+ (void)mapCharacterPropertiesFromStyle:(id)a0 secondaryStyle:(id)a1 toNS:(id)a2 stickyFont:(id *)a3 scale:(double)a4;
+ (void)mapCharacterPropertiesFromStyle:(id)a0 toNS:(id)a1 stickyFont:(id *)a2 scale:(double)a3;
+ (void)mapCharacterPropertiesFromStyles:(id *)a0 styleCount:(unsigned int)a1 toNS:(id)a2 stickyFont:(id *)a3 scale:(double)a4;
+ (void)mapFontFeaturesFromStyle:(id)a0 secondaryStyle:(id)a1 toNS:(id)a2 ioFont:(id *)a3 ligatures:(int)a4;
+ (id)newFontWithFeaturesFromFont:(id)a0 primaryStyle:(id)a1 secondaryStyle:(id)a2 ligatures:(int)a3;
+ (id)propertyMapToDictionary:(id)a0;

@end
