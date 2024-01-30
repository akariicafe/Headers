@interface CACLocaleUtilities : NSObject

+ (id)componentsFromLocaleIdentifier:(id)a0;
+ (id)_localizedUIStringForKey:(id)a0 forResource:(id)a1;
+ (id)_localizedUIStringForKey:(id)a0 forResource:(id)a1 locale:(id)a2;
+ (id)displayStringForByteSize:(unsigned long long)a0;
+ (id)displayStringForTimeRemaining:(double)a0;
+ (BOOL)isLocaleIdentifier:(id)a0 containedInLocaleIdentifiers:(id)a1;
+ (BOOL)isSameLangaugeFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (BOOL)isSameLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)localizedDisplayStringForLocaleIdentifier:(id)a0;
+ (id)localizedUIStringForBuiltinCommandsMiniDescriptionsKey:(id)a0;
+ (id)localizedUIStringForKey:(id)a0;
+ (id)normalizedLocaleIdentifier:(id)a0;
+ (id)siriLocaleUIStringForKey:(id)a0;
+ (id)systemLocaleIdentifier;
+ (id)systemUILocale;

@end
