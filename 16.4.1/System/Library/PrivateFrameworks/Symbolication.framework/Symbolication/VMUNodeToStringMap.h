@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_nodeToStringIndexMapVoidPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)resymbolicate__NSMallocBlock__StringsWithGraph:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)_indexForString:(id)a0;
- (id)stringForNode:(unsigned int)a0;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (unsigned int)count;
- (void)dealloc;
- (id)init;
- (unsigned int)uniquedStringCount;
- (void)setString:(id)a0 forNode:(unsigned int)a1;
- (id)description;
- (void).cxx_destruct;

@end
