@class NSString;

@interface ABVCardActivityAlertScanner : NSObject {
    NSString *_string;
    unsigned long long _position;
}

+ (BOOL)characterIsStringValueCharacter:(unsigned short)a0;
+ (id)scanAlertValueFromString:(id)a0;
+ (id)scannerWithString:(id)a0;

- (unsigned long long)position;
- (BOOL)atEnd;
- (unsigned short)nextCharacter;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (unsigned short)scanCharacter;
- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (BOOL)scanPastItemDelimiter;
- (id)scanStringValue;
- (BOOL)scanPastKeyValueSeparator;
- (unsigned short)nextUnescapedCharacter;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;
- (BOOL)scanPastCharacter:(unsigned short)a0;
- (unsigned short)scanCharacterWithEscaping:(BOOL)a0;
- (void)scanPastWhitespace;

@end
