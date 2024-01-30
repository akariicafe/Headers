@class NSString;

@interface TSCERefNamingContext : NSObject <NSCopying>

@property (retain, nonatomic) NSString *contextSheetName;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } hostTableUID;
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

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
