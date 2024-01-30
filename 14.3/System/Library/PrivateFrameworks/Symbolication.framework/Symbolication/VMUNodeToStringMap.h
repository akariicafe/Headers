@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_nodeToStringIndexMapVoidPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned int)uniquedStringCount;
- (unsigned int)_indexForString:(id)a0;
- (void)setString:(id)a0 forNode:(unsigned int)a1;
- (id)stringForNode:(unsigned int)a0;
- (unsigned int)count;
- (void)encodeWithCoder:(id)a0;

@end
