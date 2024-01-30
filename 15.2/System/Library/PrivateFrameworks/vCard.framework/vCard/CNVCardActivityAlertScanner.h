@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {
    NSString *_string;
    unsigned long long _position;
}

+ (BOOL)characterIsStringValueCharacter:(unsigned short)a0;
+ (id)scanAlertValueFromString:(id)a0;
+ (id)scannerWithString:(id)a0;

- (BOOL)atEnd;
- (id)initWithString:(id)a0;
- (unsigned long long)position;
- (unsigned short)nextCharacter;
- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (BOOL)scanPastItemDelimiter;
- (id)scanStringValue;
- (BOOL)scanPastKeyValueSeparator;
- (unsigned short)nextUnescapedCharacter;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;
- (unsigned short)scanCharacter;
- (BOOL)scanPastCharacter:(unsigned short)a0;
- (unsigned short)scanCharacterWithEscaping:(BOOL)a0;
- (void)scanPastWhitespace;
- (void).cxx_destruct;

@end
