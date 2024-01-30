@class NSDictionary, NSString, NSMutableDictionary;

@interface BCSKeyValueParser : NSObject {
    NSString *_string;
    unsigned long long _currentIndex;
    unsigned long long _stringLength;
    NSMutableDictionary *_keyValuePairs;
}

@property (readonly, copy, nonatomic) NSDictionary *keyValuePairs;

- (void).cxx_destruct;
- (unsigned long long)_indexOfDelimiter:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)a0 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_parseNextKeyValuePair;
- (id)initWithString:(id)a0 startIndex:(unsigned long long)a1;

@end
