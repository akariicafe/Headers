@class VMUSwiftRuntimeInfo, VMUTaskMemoryScanner, VMUClassInfo, VMURangeArray, NSHashTable, NSMutableDictionary, VMUNonOverlappingRangeArray, VMUClassInfoMap, NSMutableArray, NSMutableSet, NSMapTable;

@interface VMUObjectIdentifier : NSObject {
    unsigned int _task;
    VMUTaskMemoryScanner *_scanner;
    NSMutableDictionary *_libSwiftRemoteMirrors;
    BOOL _debugSwiftRemoteMirror;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    NSMutableArray *_objCClassStructureClassInfoIndexes;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _objCClassCount;
    unsigned long long _swiftClassCount;
    unsigned long long _cfClassCount;
    id /* block */ _isaTranslator;
    BOOL _fragileNonPointerIsas;
    unsigned long long _lastCPlusPlusIsa;
    VMUClassInfo *_lastCPlusPlusClassInfo;
    NSHashTable *_nonObjectIsaHash;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id *_labelStringUniquingMaps;
    id *_stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    NSMutableDictionary *_pidToProcessNameDict;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    BOOL _targetProcessContainsMallocStackLoggingLiteZone;
    unsigned long long _cfBooleanTrueAddress;
    unsigned long long _cfBooleanFalseAddress;
    unsigned int _osDispatchMachOffsetInOSXPCConnection;
    unsigned long long _taggedPointerObfuscator;
    unsigned char _taggedPointerPermutations[8];
}

@property (readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI;
@property (readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI;
@property (readonly, nonatomic) struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionInteropContext *x0; unsigned long long x1; } *swiftMirror;
@property (readonly) BOOL needToValidateAddressRange;
@property (readonly) BOOL hasSwiftContent;
@property (readonly) BOOL hasSwiftReflection;
@property (readonly) unsigned int objcABI;
@property (readonly) NSMutableDictionary *moduleNameToBinaryPathDict;
@property (readonly, nonatomic) id /* block */ memoryReader;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned long long taggedPointerMask;
@property (readonly, nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator;
@property (nonatomic) unsigned int objectContentLevel;
@property (retain, nonatomic) VMURangeArray *readonlyRegionRanges;
@property (readonly, nonatomic) struct VMUAutoreleasePoolPageLayout { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } *autoreleasePoolPageLayout;

- (id)initWithTask:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_scanner;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 scanner:(id)a2;
- (unsigned long long)addressOfSymbol:(const char *)a0 inLibrary:(const char *)a1;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)SwiftClassCount;
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)a0;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)a0;
- (id)classInfoForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (BOOL)isTaggedPointer:(void *)a0;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 classInfo:(id)a3;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned long long)translateIsaPointer:(unsigned long long)a0;
- (struct VMUAutoreleasePoolPageLayout { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } *)createAutoreleasePoolPageLayout;
- (void)loadSwiftReflectionLibraries;
- (void)_populateSwiftABIVariables;
- (void)findCFTypes;
- (void)setupIsaTranslator;
- (void)findObjCAndSwiftClasses;
- (void)_generateClassInfosForObjCClassStructurePointerTypes;
- (id)_classInfoWithNonobjectType:(id)a0 binaryPath:(id)a1;
- (BOOL)_isValidInstanceLength:(unsigned long long)a0 expectedLength:(unsigned long long)a1;
- (id)_classInfoWithPthreadType:(id)a0;
- (id)classInfoForNonobjectMemory:(void *)a0 length:(unsigned long long)a1;
- (id)_returnFaultedClass:(unsigned long long)a0 ofType:(unsigned int)a1;
- (void)_faultClass:(unsigned long long)a0 ofType:(unsigned int)a1;
- (id)osMajorMinorVersionString;
- (id)formattedDateLabel:(id)a0;
- (void)_findObjCAndSwiftClassesFromClass:(unsigned long long)a0 recursionDepth:(unsigned int)a1;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)uniquifyStringLabel:(id)a0 stringType:(int)a1 printDetail:(BOOL)a2;
- (id)labelForNSNumber:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSDate:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)a0;
- (id)labelForNSString:(void *)a0 mappedSize:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 printDetail:(BOOL)a3;
- (id)labelForNSString:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)a0 printDetail:(BOOL)a1;
- (id)labelForObjectOfClass:(id)a0 atOffset:(unsigned int)a1 ofObject:(void *)a2;
- (BOOL)_remoteAddressIsOKtoRead:(unsigned long long)a0;
- (id)labelForItemCount:(long long)a0;
- (id)labelForNSDictionary:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSSet:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSDispatchMach:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCObject:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (void)_findOffsetsInOSXPCConnection:(void *)a0 length:(unsigned long long)a1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)CFTypeCount;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 usingHandlerBlock:(id /* block */)a1;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2 classInfo:(id)a3 usingHandlerBlock:(id /* block */)a4;
- (id)classInfoForObjCClassStructurePointerType:(unsigned int)a0;
- (id)labelForClassStructure:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForClassDataRW:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForClassDataExtRW:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForClassDataRO:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForTaggedPointer:(void *)a0;
- (BOOL)_dlopenLibSwiftRemoteMirrorFromDir:(id)a0;
- (BOOL)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 avoidSystem:(BOOL)a1;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolForAddress:(unsigned long long)a0;
- (BOOL)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext { } *)a0;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)a0;
- (id)classInfoForMemory:(void *)a0 length:(unsigned long long)a1;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })vmRegionRangeForAddress:(unsigned long long)a0;
- (id)classNameForTaggedPointer:(void *)a0;
- (id)labelForNSURL:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSTaggedPointerStringCStringContainer:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteAttributedString:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSPathStore2:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForCFBundle:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSBundle:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSArray:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSCFDictionary:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteHashTable:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSCFSet:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1;
- (id)labelForNSData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSConcreteMutableData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSInlineData:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSDispatchQueue:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSLog:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)noLabelForOSXPCObject:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSTransaction:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelFor_NSActivityAssertion:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCConnection:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForOSXPCActivity:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForProtocol:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSXPCInterface:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForNSXPCConnection:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelFor__NSMallocBlock__:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (id)labelForMemory:(void *)a0 length:(unsigned long long)a1 remoteAddress:(unsigned long long)a2;
- (BOOL)_dlopenLibSwiftRemoteMirrorNearExecutable;

@end
