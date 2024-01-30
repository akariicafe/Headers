@class NSString, NSArray, VMUClassInfo, NSMutableArray;

@interface VMUFieldInfo : NSObject {
    VMUClassInfo *_destinationLayout;
    NSMutableArray *_subFieldArray;
    NSArray *_possibleEnumPayloadFieldArray;
}

@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL isCapture;
@property (readonly, nonatomic) BOOL isByref;
@property (readonly, nonatomic) BOOL isStorageImplPointer;
@property (readonly, nonatomic) BOOL isArraySize;
@property (readonly, nonatomic) BOOL isArrayEntries;
@property (readonly, nonatomic) BOOL isStorageBitmapPointer;
@property (readonly, nonatomic) BOOL isKeysPointer;
@property (readonly, nonatomic) BOOL isValuesPointer;
@property (readonly, nonatomic) BOOL isValueField;
@property (readonly, nonatomic) BOOL isKeyField;
@property (readonly, nonatomic) BOOL typeNameMayDescribeReferencedAllocation;
@property (readonly) void *swiftTyperef;
@property (retain, nonatomic) VMUClassInfo *destinationLayout;
@property (readonly) NSString *typedDescription;
@property (readonly, nonatomic) NSString *ivarName;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly) unsigned int scanType;
@property (readonly) unsigned int offset;
@property (readonly) unsigned int size;
@property (readonly) unsigned int kind;
@property (readonly) unsigned int scannableSize;
@property (readonly) unsigned int stride;
@property (readonly) unsigned int bitfieldWidth;
@property (readonly, nonatomic) NSArray *subFieldArray;
@property (readonly, nonatomic) NSArray *possibleEnumPayloadFieldArray;

- (void)_setSize:(unsigned int)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)_setFlags:(unsigned int)a0;
- (void)setTypeName:(id)a0;
- (id)_fullIvarNameAtOffset:(unsigned int)a0 leafOffset:(unsigned int *)a1 depth:(unsigned int)a2;
- (void)_setIvarName:(id)a0;
- (void)_setKind:(unsigned int)a0;
- (void)_setOffset:(unsigned int)a0;
- (void)_setScanType:(unsigned int)a0;
- (void)_setScannableSize:(unsigned int)a0;
- (void)_setStride:(unsigned int)a0;
- (id)descriptionOfFieldValueInObjectMemory:(void *)a0 scanner:(id)a1;
- (id)fullIvarNameAtOffset:(unsigned int)a0;
- (id)getLeafFieldAtOffset:(unsigned int)a0 leafOffset:(unsigned int *)a1;
- (id)initStorageEntryFieldWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 subFieldArray:(id)a7;
- (id)initStorageInfoFieldWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 subFieldArray:(id)a7;
- (id)initSwiftEnumPayloadFieldWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 possibleEnumSubFieldArray:(id)a7 swiftTyperef:(void *)a8;
- (id)initWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 subFieldArray:(id)a7 swiftTyperef:(void *)a8;
- (id)initWithName:(id)a0 type:(id)a1 scan:(unsigned int)a2 offset:(unsigned int)a3 size:(unsigned int)a4;
- (id)initWithObjcIvar:(struct objc_ivar { } *)a0 size:(unsigned int)a1 offset:(unsigned int)a2 ivarName:(const char *)a3 isARC:(BOOL)a4 is64Bit:(BOOL)a5;
- (id)initWithSerializer:(id)a0 classMap:(id)a1 version:(unsigned int)a2 error:(id *)a3;
- (id)initWithSerializer:(id)a0 classMap:(id)a1 version:(unsigned int)a2 returnedDestinationLayoutClassInfoIndex:(unsigned int *)a3 error:(id *)a4;
- (void)initializeSubFieldArray;
- (void)serializeWithClassMap:(id)a0 simpleSerializer:(id)a1 version:(unsigned int)a2;

@end
