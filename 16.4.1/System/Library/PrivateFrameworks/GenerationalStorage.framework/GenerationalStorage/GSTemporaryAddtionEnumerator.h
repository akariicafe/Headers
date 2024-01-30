@class GSTemporaryStorage, NSString, NSDirectoryEnumerator, NSArray, NSError;

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating> {
    GSTemporaryStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOption;
    NSDirectoryEnumerator *_enumerator;
    NSArray *_array;
    unsigned long long _pos;
}

@property (readonly, nonatomic) NSError *error;

- (id)nextObject;
- (void).cxx_destruct;
- (id)_nextURL;
- (id)initWithStorage:(id)a0 nameSpace:(id)a1 withOptions:(unsigned long long)a2 withoutOptions:(unsigned long long)a3 ordering:(int)a4;

@end
