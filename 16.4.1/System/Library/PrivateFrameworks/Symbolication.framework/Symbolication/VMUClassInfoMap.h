@class NSMutableArray;

@interface VMUClassInfoMap : NSObject <NSSecureCoding> {
    void *_classInfoMap1;
    void *_classInfoMap2;
    NSMutableArray *_linearClassInfos;
    void *_fieldInfoMap1;
    void *_fieldInfoMap2;
    NSMutableArray *_linearFieldInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int fieldInfoCount;
@property (readonly, nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces;

+ (void)_destroyRetainedLinearArray:(id *)a0 withCount:(unsigned int)a1;

- (id)swiftFieldWithName:(const char *)a0 offset:(unsigned int)a1 kind:(unsigned int)a2 typeref:(struct swift_typeref_interop { unsigned long long x0; int x1; })a3;
- (void)encodeWithCoder:(id)a0;
- (id)classInfoForIndex:(unsigned int)a0;
- (unsigned int)addClassInfo:(id)a0 forAddress:(unsigned long long)a1;
- (unsigned int)indexForClassInfo:(id)a0;
- (void)enumerateInfosWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)indexForFieldInfo:(id)a0;
- (id *)_retainedLinearArrayWithReturnedCount:(unsigned int *)a0;
- (void)dealloc;
- (void)_applyTypeOverlay:(id)a0;
- (id)classInfoForAddress:(unsigned long long)a0;
- (id)init;
- (void)addClassInfosFromMap:(id)a0;
- (unsigned int)addFieldInfo:(id)a0;
- (id)fieldInfoForIndex:(unsigned int)a0;
- (void)memoizeSwiftField:(id)a0 withName:(const char *)a1 offset:(unsigned int)a2 kind:(unsigned int)a3 typeref:(struct swift_typeref_interop { unsigned long long x0; int x1; })a4;
- (void).cxx_destruct;

@end
