@class CKXVersionedReaderWriterStore, CKXProxyCache, CKXProxyBase, NSData, NSObject;
@protocol CKXWriteStructProxy, CKXReadStructProxy, CKXBinding;

@interface CKXBackingStore : NSObject <CKXReaderProtocol, CKXWriterProtocol>

@property (retain, nonatomic) NSObject<CKXBinding> *binding;
@property (retain, nonatomic) CKXVersionedReaderWriterStore *readerWriterStore;
@property (retain, nonatomic) CKXProxyCache *proxyCache;
@property (nonatomic) unsigned long long cacheScope;
@property (retain, nonatomic) CKXProxyBase<CKXReadStructProxy> *topLevelReadProxy;
@property (retain, nonatomic) CKXProxyBase<CKXWriteStructProxy> *topLevelWriteProxy;
@property (nonatomic) struct { unsigned char formatVersion; struct { unsigned char writerCode; unsigned char writerVersion; } writerIdentity; } header;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL isWriting;
@property (readonly, nonatomic) unsigned char formatVersion;

+ (id)dataWithoutHeader:(id)a0;
+ (struct { unsigned char x0; struct { unsigned char x0; unsigned char x1; } x1; })headerForData:(id)a0;
+ (id)data:(id)a0 withHeaderForVersion:(unsigned char)a1;
+ (id)createHeaderDataForFormatVersion:(unsigned char)a0;

- (id)flush;
- (id)reader;
- (id)writer;
- (id)schema;
- (void)readUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finishWriting;
- (void)writeUsingBlock:(id /* block */)a0;
- (id)readerForProxy:(id)a0;
- (void)copyData:(void *)a0 forField:(unsigned long long)a1 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)writerForProxy:(id)a0;
- (void)setData:(void *)a0 withLength:(unsigned long long)a1 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a2;
- (void)setData:(void *)a0 withEncoding:(const char *)a1 forField:(unsigned long long)a2 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (BOOL)referenceIsNull:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (long long)lengthForList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (BOOL)setData:(id)a0 error:(id *)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })rootStructWithType:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructAtIndex:(long long)a0 inList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (void)copyData:(void *)a0 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginRootStructWithType:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginReferencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginReferencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })beginAppendedListStructInList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)commitStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithBinding:(id)a0 data:(id)a1 formatVersion:(unsigned char)a2 optionsByReaderWriterClass:(id)a3 error:(id *)a4;
- (id)initWriterWithBinding:(id)a0 version:(unsigned char)a1;
- (BOOL)_setupBackingStoreForReadingWithError:(id *)a0;
- (id)proxyForStructToken:(unsigned long long)a0 withCKXStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 mutable:(BOOL)a2 cacheScope:(long long)a3;
- (id)proxyWithListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 mutable:(BOOL)a1 cacheScope:(long long)a2;
- (id)initWithBinding:(id)a0 data:(id)a1 error:(id *)a2;
- (id)initWithBinding:(id)a0 formatVersion:(unsigned char)a1 writerBlock:(id /* block */)a2;
- (struct { unsigned char x0; unsigned char x1; })writerIdentity;
- (id)structProxyForStructReference:(unsigned long long)a0 inCKXStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 mutable:(BOOL)a2;
- (id)structListProxyForListReference:(unsigned long long)a0 inCKXStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 mutable:(BOOL)a2;
- (id)appendedStructProxyForListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (id)structProxyForListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 atIndex:(long long)a1;
- (void)proxyScope:(id /* block */)a0;

@end
