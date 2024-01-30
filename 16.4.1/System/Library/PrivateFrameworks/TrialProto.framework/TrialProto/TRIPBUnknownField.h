@class NSMutableArray, TRIPBUInt64Array, TRIPBUInt32Array;

@interface TRIPBUnknownField : NSObject <NSCopying>

@property (readonly, nonatomic) int number;
@property (readonly, nonatomic) TRIPBUInt64Array *varintList;
@property (readonly, nonatomic) TRIPBUInt32Array *fixed32List;
@property (readonly, nonatomic) TRIPBUInt64Array *fixed64List;
@property (readonly, nonatomic) NSMutableArray *lengthDelimitedList;
@property (readonly, nonatomic) NSMutableArray *groupList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)addGroup:(id)a0;
- (id)initWithNumber:(int)a0;
- (void)mergeFromField:(id)a0;
- (void)addFixed32:(unsigned int)a0;
- (void)addFixed64:(unsigned long long)a0;
- (void)addLengthDelimited:(id)a0;
- (void)addVarint:(unsigned long long)a0;
- (unsigned long long)serializedSize;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (void)writeAsMessageSetExtensionToOutput:(id)a0;
- (void)writeToOutput:(id)a0;

@end
