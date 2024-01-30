@class NSString, NSArray;

@interface MecabraWordProperties : NSObject

@property (copy, nonatomic) NSString *analysisString;
@property (retain, nonatomic) NSArray *characterInformation;
@property (retain, nonatomic) NSArray *codeLookupInformation;
@property (nonatomic, getter=isEmoji) BOOL emoji;
@property (nonatomic) int language;

+ (id)sortedRadicalList;
+ (struct __IDXIndex { } *)informationDictionaryAtPath:(struct __CFURL { } *)a0;
+ (struct __IDXIndex { } *)characterInformationDictionary;
+ (id)searchResultsForString:(id)a0 dictionary:(struct __IDXIndex { } *)a1;
+ (struct __IDXIndex { } *)codeLookupInformationDictionary;

- (void)dealloc;
- (id)valueForKey:(int)a0;
- (id)initWithString:(id)a0 language:(int)a1;
- (id)wubixingCodesForStandard:(int)a0;
- (id)separatedInputCodesForString:(id)a0;
- (id)radicalInformationForString:(id)a0;
- (id)strokeInformationForString:(id)a0;
- (id)pinyinInformationForString:(id)a0;
- (id)zhuyinInformationForString:(id)a0;
- (id)initialsForStrings:(id)a0;
- (id)tonesForString:(id)a0;
- (id)wubixingCodes;
- (id)bihuaCodes;
- (id)cangjieCodes;
- (id)isIncludedInCurrentLanguage;

@end
