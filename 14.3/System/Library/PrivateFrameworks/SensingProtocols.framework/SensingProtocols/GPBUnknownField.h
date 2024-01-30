@class GPBUInt64Array, GPBUInt32Array, NSMutableArray;

@interface GPBUnknownField : NSObject <NSCopying>

@property (readonly, nonatomic) int number;
@property (readonly, nonatomic) GPBUInt64Array *varintList;
@property (readonly, nonatomic) GPBUInt32Array *fixed32List;
@property (readonly, nonatomic) GPBUInt64Array *fixed64List;
@property (readonly, nonatomic) NSMutableArray *lengthDelimitedList;
@property (readonly, nonatomic) NSMutableArray *groupList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithNumber:(int)a0;
- (unsigned long long)hash;
- (id)description;
- (void)addGroup:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)serializedSize;
- (void)writeToOutput:(id)a0;
- (void)addVarint:(unsigned long long)a0;
- (void)addFixed64:(unsigned long long)a0;
- (void)addLengthDelimited:(id)a0;
- (void)addFixed32:(unsigned int)a0;
- (void)writeAsMessageSetExtensionToOutput:(id)a0;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (void)mergeFromField:(id)a0;

@end
