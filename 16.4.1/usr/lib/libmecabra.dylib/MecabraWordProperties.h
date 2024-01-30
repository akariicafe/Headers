@class NSString, NSArray;

@interface MecabraWordProperties : NSObject

@property (copy, nonatomic) NSString *analysisString;
@property (retain, nonatomic) NSArray *characterInformation;
@property (retain, nonatomic) NSArray *codeLookupInformation;
@property (nonatomic, getter=isEmoji) BOOL emoji;
@property (nonatomic) int language;

+ (struct __IDXIndex { } *)codeLookupInformationDictionary;
+ (struct __IDXIndex { } *)characterInformationDictionary;
+ (struct __IDXIndex { } *)informationDictionaryAtPath:(struct __CFURL { } *)a0;
+ (id)searchResultsForString:(id)a0 dictionary:(struct __IDXIndex { } *)a1;
+ (id)sortedRadicalList;

- (id)valueForKey:(int)a0;
- (void)dealloc;
- (id)tonesForString:(id)a0;
- (id)bihuaCodes;
- (id)cangjieCodes;
- (id)initWithString:(id)a0 language:(int)a1;
- (id)initialsForStrings:(id)a0;
- (id)isIncludedInCurrentLanguage;
- (id)pinyinInformationForString:(id)a0;
- (id)radicalInformationForString:(id)a0;
- (id)separatedInputCodesForString:(id)a0;
- (id)strokeInformationForString:(id)a0;
- (id)wubixingCodes;
- (id)wubixingCodesForStandard:(int)a0;
- (id)zhuyinInformationForString:(id)a0;

@end
