@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (id)memberByName:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)dataType;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (id)init;
- (id)description;
- (id)members;

@end
