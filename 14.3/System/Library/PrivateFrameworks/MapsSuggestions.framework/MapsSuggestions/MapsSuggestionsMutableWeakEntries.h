@class NSArray, NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject {
    NSPointerArray *_array;
    BOOL _dirty;
}

@property (readonly, nonatomic) NSArray *strongArray;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addWeakObject:(id)a0;
- (id)initWithEntries:(id)a0;

@end
