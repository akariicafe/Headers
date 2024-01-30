@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {
    NSString *_string;
    unsigned long long _index;
}

+ (id)parseKeyValuePairsFromString:(id)a0;

- (void).cxx_destruct;
- (BOOL)_isAtEnd;
- (id)_initWithString:(id)a0;
- (id)_parseKeyValuePairs;
- (BOOL)_parseKeyValuePairWithKey:(id *)a0 value:(id *)a1;
- (unsigned short)_previewCharacter;
- (unsigned short)_consumeCharacter;
- (void)_skipWhitespace;
- (id)_parseKey;
- (id)_parseValue;
- (id)_parseUpToCharacterFromSet:(id)a0;
- (id)_parseJSONValue;

@end
