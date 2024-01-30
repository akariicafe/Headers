@class NSString, NSMutableDictionary, NSCharacterSet;

@interface PBTextReader : NSObject {
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_tagNameCharacterSet;
    NSCharacterSet *_nonHexDigitCharacterSet;
    unsigned long long _pos;
    unsigned long long _length;
    NSString *_string;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_cachedObjectTypes;
}

- (void)dealloc;
- (id)init;
- (id)readMessageType:(Class)a0 fromString:(id)a1;

@end
