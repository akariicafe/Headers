@class NSString, TSTTableInfo;

@interface TNFormBasedSheet : TNSheet

@property (retain, nonatomic) NSString *importedTargetName;
@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } tableUID;

- (void).cxx_destruct;
- (double)contentScale;
- (BOOL)isForm;
- (id).cxx_construct;
- (BOOL)shouldBeDisplayed;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)clearTableInfoCache;
- (id)initWithContext:(id)a0 importedTargetName:(id)a1;
- (void)resolveImportedTargetNameInDocumentRoot:(id)a0;

@end
