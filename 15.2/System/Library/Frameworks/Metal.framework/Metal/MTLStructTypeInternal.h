@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (unsigned long long)dataType;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (id)members;
- (id)memberByName:(id)a0;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (id)description;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;

@end
