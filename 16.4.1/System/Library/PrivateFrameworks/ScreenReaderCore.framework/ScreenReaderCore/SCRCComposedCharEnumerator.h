@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {
    BOOL _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (id)nextObject;
- (id)initWithString:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;

@end
