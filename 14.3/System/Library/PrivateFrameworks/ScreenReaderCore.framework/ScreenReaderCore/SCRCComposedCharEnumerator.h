@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {
    BOOL _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)nextObject;
- (id)allObjects;

@end
