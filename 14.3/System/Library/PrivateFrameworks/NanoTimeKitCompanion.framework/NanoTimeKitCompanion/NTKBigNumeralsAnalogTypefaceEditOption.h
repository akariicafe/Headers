@class NSLocale;

@interface NTKBigNumeralsAnalogTypefaceEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) unsigned long long typeface;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)defaultOptionForLocale:(id)a0 device:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_orderedValuesForDevice:(id)a0;
+ (id)__orderedValuesForDevice:(id)a0;
+ (id)optionWithTypeface:(unsigned long long)a0 forDevice:(id)a1;
+ (id)localeForTypeface:(unsigned long long)a0;

- (long long)swatchStyle;
- (id)_valueToFaceBundleStringDict;

@end
