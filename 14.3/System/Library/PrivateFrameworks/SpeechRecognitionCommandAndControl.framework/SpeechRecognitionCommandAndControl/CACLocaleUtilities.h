@interface CACLocaleUtilities : NSObject

+ (id)componentsFromLocaleIdentifier:(id)a0;
+ (id)localizedUIStringForKey:(id)a0;
+ (BOOL)isSameLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)systemLocaleIdentifier;
+ (BOOL)isSameLangaugeFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (BOOL)isLocaleIdentifier:(id)a0 containedInLocaleIdentifiers:(id)a1;
+ (id)normalizedLocaleIdentifier:(id)a0;
+ (id)displayStringForByteSize:(unsigned long long)a0;
+ (id)displayStringForTimeRemaining:(double)a0;

@end
