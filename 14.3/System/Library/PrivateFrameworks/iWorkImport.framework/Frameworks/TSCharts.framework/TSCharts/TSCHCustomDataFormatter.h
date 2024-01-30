@class TSUCustomFormat, NSString, NSUUID;

@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject> {
    NSUUID *mCustomFormatListKey;
    unsigned int mFormatType;
}

@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataFormatterWithCustomFormat:(id)a0 customFormatListKey:(id)a1 formatType:(unsigned int)a2;

- (void)dealloc;
- (unsigned int)formatType;
- (BOOL)isCompatibleWithDataFormatter:(id)a0;
- (id)convertToPersistableStyleObject;
- (long long)numberOfDecimalPlaces;
- (id)chartFormattedStringForValue:(id)a0 locale:(id)a1;
- (id)chartFormattedInspectorStringForValue:(id)a0 locale:(id)a1;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)a0;
- (id)initWithCustomFormat:(id)a0 customFormatListKey:(id)a1 formatType:(unsigned int)a2;
- (id)p_stringForValue:(id)a0 locale:(id)a1;

@end
