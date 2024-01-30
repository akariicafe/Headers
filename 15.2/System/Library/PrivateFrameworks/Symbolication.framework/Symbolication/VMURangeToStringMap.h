@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_rangeAndStringVectorVoidPtr;
    BOOL _sorted;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)setString:(id)a0 forRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (unsigned int)indexForString:(id)a0 insertIfMissing:(BOOL)a1;
- (void)sort;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateRanges:(id /* block */)a0;
- (id)description;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeContainingAddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForString:(id)a0 startingAtAddress:(unsigned long long)a1;
- (id)stringForIndex:(unsigned int)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned int)count;
- (void)dealloc;
- (void)resymbolicateStringsWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (id)stringForAddress:(unsigned long long)a0;
- (unsigned int)uniquedStringCount;

@end
