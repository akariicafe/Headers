@class NSEnumerator, NSString, NSLocale;

@interface AVMetadataEnumerator : NSEnumerator {
    struct OpaqueFigMetadataReader { } *_reader;
    NSEnumerator *_arrayEnumerator;
    id _key;
    NSString *_keySpace;
    NSLocale *_locale;
    long long _count;
    long long _index;
}

+ (id)metadataEnumeratorWithArray:(id)a0 key:(id)a1 keySpace:(id)a2 locale:(id)a3;
+ (id)metadataEnumeratorWithMetadataReader:(struct OpaqueFigMetadataReader { } *)a0;

- (id)nextObject;
- (void)dealloc;
- (void)_setKey:(id)a0;
- (void)_setArrayEnumerator:(id)a0;
- (void)_setKeySpace:(id)a0;
- (void)_setLocale:(id)a0;
- (void)_setMetadataReader:(struct OpaqueFigMetadataReader { } *)a0;
- (id)initWithArray:(id)a0 key:(id)a1 keySpace:(id)a2 locale:(id)a3;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader { } *)a0;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader { } *)a0 array:(id)a1 key:(id)a2 keySpace:(id)a3 locale:(id)a4;

@end
