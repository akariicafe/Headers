@class NSString, NSArray, VMUClassInfo, NSMutableArray;

@interface VMUFieldInfo : NSObject {
    VMUClassInfo *_destinationLayout;
    NSMutableArray *_subFieldArray;
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
@property (readonly) void *swiftTyperef;
@property (readonly) NSString *typedDescription;
@property (readonly, nonatomic) NSString *ivarName;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly) unsigned int scanType;
@property (readonly) unsigned int offset;
@property (readonly) unsigned int size;
@property (readonly) unsigned int scannableSize;
@property (readonly) unsigned int stride;
@property (readonly) unsigned int bitfieldWidth;
@property (readonly, nonatomic) VMUClassInfo *destinationLayout;
@property (readonly, nonatomic) NSArray *subFieldArray;

- (id)mutableCopy;
- (void).cxx_destruct;
- (void)_setSize:(unsigned int)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)fullIvarNameAtOffset:(unsigned int)a0;
- (id)getLeafFieldAtOffset:(unsigned int)a0 leafOffset:(unsigned int *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 scan:(unsigned int)a2 offset:(unsigned int)a3 size:(unsigned int)a4;
- (id)initWithObjcIvar:(struct objc_ivar { } *)a0 size:(unsigned int)a1 isARC:(BOOL)a2 is64Bit:(BOOL)a3;
- (id)initWithSerializer:(id)a0 classMap:(id)a1 version:(unsigned int)a2 error:(id *)a3;
- (void)serializeWithClassMap:(id)a0 simpleSerializer:(id)a1 version:(unsigned int)a2;
- (id)initWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 subFieldArray:(id)a7 swiftTyperef:(void *)a8;
- (id)_getFieldAtOffset:(unsigned int)a0;
- (void)_setFlags:(unsigned int)a0;
- (id)initWithSerializer:(id)a0 classMap:(id)a1 version:(unsigned int)a2 returnedDestinationLayoutClassInfoIndex:(unsigned int *)a3 error:(id *)a4;
- (id)_fullIvarNameAtOffset:(unsigned int)a0 leafOffset:(unsigned int *)a1 depth:(unsigned int)a2;
- (void)initializeSubFieldArray;
- (id)initStorageInfoFieldWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 subFieldArray:(id)a7;
- (void)_setOffset:(unsigned int)a0;
- (id)initStorageEntryFieldWithName:(id)a0 type:(id)a1 kind:(unsigned int)a2 scan:(unsigned int)a3 offset:(unsigned int)a4 size:(unsigned int)a5 stride:(unsigned int)a6 subFieldArray:(id)a7;
- (void)_setIvarName:(id)a0;
- (void)_setTypeName:(id)a0;
- (void)_setScanType:(unsigned int)a0;
- (void)_setScannableSize:(unsigned int)a0;
- (void)_setStride:(unsigned int)a0;
- (void)_setDestinationLayout:(id)a0;
- (id)descriptionOfFieldValueInObjectMemory:(void *)a0 scanner:(id)a1;

@end
