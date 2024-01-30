@class NSString, NSArray, PRLanguage, NSValue, NSMutableArray;

@interface PRTypologyRecord : NSObject {
    NSString *_string;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    PRLanguage *_langObj;
    NSArray *_languages;
    NSString *_appIdentifier;
    NSValue *_selectedRangeValue;
    NSArray *_topLanguages;
    NSArray *_keyEventArray;
    NSMutableArray *_typologyCorrections;
    NSMutableArray *_typologyCandidates;
    NSArray *_results;
    double _openTime;
    double _closeTime;
    unsigned long long _offset;
    BOOL _autocorrect;
    BOOL _initialCapitalize;
    BOOL _autocapitalize;
    BOOL _isOpen;
}

+ (id)currentTypologyRecord;
+ (id)openTypologyRecordWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 languageObject:(id)a2 languages:(id)a3 topLanguages:(id)a4 autocorrect:(BOOL)a5 initialCapitalize:(BOOL)a6 autocapitalize:(BOOL)a7 keyEventArray:(id)a8 appIdentifier:(id)a9 selectedRangeValue:(id)a10;
+ (void)resetTypologyRecords;
+ (void)setTypologyRecordsLimit:(unsigned long long)a0;
+ (void)writeTypologyRecords;

- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)addCandidate:(id)a0;
- (void)closeTypologyRecordWithResults:(id)a0;
- (void)addCorrection:(id)a0;
- (id)initWithString:(id)a0 offset:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 languageObject:(id)a3 languages:(id)a4 topLanguages:(id)a5 autocorrect:(BOOL)a6 initialCapitalize:(BOOL)a7 autocapitalize:(BOOL)a8 keyEventArray:(id)a9 appIdentifier:(id)a10 selectedRangeValue:(id)a11;

@end
