@interface CRKClassKitColorAndMascotUtility : NSObject

+ (unsigned long long)mascotForClass:(id)a0;
+ (unsigned long long)asmHash:(unsigned long long)a0 forString:(id)a1;
+ (unsigned long long)classColorFromClassName:(id)a0;
+ (id)classThemeColors;
+ (unsigned long long)colorForClass:(id)a0;
+ (id)colorIdentifierForColorType:(unsigned long long)a0;
+ (unsigned long long)colorTypeForColorIdentifier:(id)a0;
+ (id)colorTypesByColorIdentifier;
+ (unsigned long long)defaultMascot;
+ (id)mascotIdentifierForMascotType:(unsigned long long)a0;
+ (unsigned long long)mascotTypeForMascotIdentifier:(id)a0;
+ (id)mascotTypesByMascotIdentifier;
+ (BOOL)setColor:(unsigned long long)a0 forClass:(id)a1 error:(id *)a2;
+ (BOOL)setMascot:(unsigned long long)a0 forClass:(id)a1 error:(id *)a2;

@end
