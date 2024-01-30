@class GPBUInt64Array, GPBUInt32Array, NSMutableArray;

@interface GPBUnknownField : NSObject <NSCopying>

@property (readonly, nonatomic) int number;
@property (readonly, nonatomic) GPBUInt64Array *varintList;
@property (readonly, nonatomic) GPBUInt32Array *fixed32List;
@property (readonly, nonatomic) GPBUInt64Array *fixed64List;
@property (readonly, nonatomic) NSMutableArray *lengthDelimitedList;
@property (readonly, nonatomic) NSMutableArray *groupList;

- (void)addGroup:(id)a0;
- (void)addFixed64:(unsigned long long)a0;
- (void)writeAsMessageSetExtensionToOutput:(id)a0;
- (void)mergeFromField:(id)a0;
- (id)initWithNumber:(int)a0;
- (void)addVarint:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addLengthDelimited:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)serializedSizeAsMessageSetExtension;
- (unsigned long long)hash;
- (void)dealloc;
- (void)writeToOutput:(id)a0;
- (unsigned long long)serializedSize;
- (void)addFixed32:(unsigned int)a0;

@end
