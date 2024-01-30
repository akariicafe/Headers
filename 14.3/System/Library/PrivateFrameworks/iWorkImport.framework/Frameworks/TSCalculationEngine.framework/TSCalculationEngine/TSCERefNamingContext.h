@class NSString;

@interface TSCERefNamingContext : NSObject <NSCopying>

@property (retain, nonatomic) NSString *contextSheetName;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } hostTableUID;
@property (nonatomic) BOOL suppressIdenticalEndReference;
@property (nonatomic) BOOL useSymbolicNames;
@property (nonatomic) BOOL allowTableName;
@property (nonatomic) BOOL allowSpanningColumnReferenceBodyQualifier;
@property (nonatomic) BOOL showGeometricAsBase;
@property (nonatomic) BOOL quoteComponents;
@property (nonatomic) BOOL forceEscaping;
@property (nonatomic) BOOL forceTableName;
@property (nonatomic) BOOL forceSheetName;
@property (nonatomic) BOOL forFormulaPlainText;
@property (nonatomic) BOOL usedSymbolicName;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id).cxx_construct;

@end
