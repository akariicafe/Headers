@interface TSTColumnAggregate : TSKSosBase <NSCopying> {
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _columnUid;
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _columnAggregateUid;
    struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } _runningTotalGroupingColumnUid;
    BOOL _definedColumnAggregateUid;
    BOOL _definedRunningTotalGroupingColumnUid;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } columnAggregateUid;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } columnUid;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } runningTotalGroupingColumnUid;
@property (readonly, nonatomic) int level;
@property (nonatomic) unsigned char aggregateType;
@property (readonly, nonatomic) unsigned char showAsType;

- (id).cxx_construct;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (void)getUUIDBytesForColumnAggregate:(unsigned char[16])a0;
- (void)getUUIDBytesForColumn:(unsigned char[16])a0;
- (void)getUUIDBytesForRunningTotalGroupingColumn:(unsigned char[16])a0;
- (id)initAsEmptyAggregate;
- (id)initForCategoriesWithColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 aggregateType:(unsigned char)a1 level:(int)a2;
- (id)initForPivotWithColumnAggregateUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 columnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 aggregateType:(unsigned char)a2 showAsType:(unsigned char)a3 runningTotalGroupingColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a4;
- (id)initForPivotWithColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 aggregateType:(unsigned char)a1;
- (id)initForPivotWithColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 aggregateType:(unsigned char)a1 showAsType:(unsigned char)a2 runningTotalGroupingColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithColumnAggregateUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 columnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 aggregateType:(unsigned char)a2 level:(int)a3 showAsType:(unsigned char)a4 runningTotalGroupingColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a5;

@end
