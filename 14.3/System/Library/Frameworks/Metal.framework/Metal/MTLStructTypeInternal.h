@class NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;

- (id)formattedDescription:(unsigned long long)a0;
- (id)memberByName:(id)a0;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)dataType;
- (id)description;
- (id)members;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;

@end
