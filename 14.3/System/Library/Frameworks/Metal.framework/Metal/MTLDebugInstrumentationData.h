@class __end_cap_, NSData, NSObject, __end_;
@protocol OS_dispatch_data;

@interface MTLDebugInstrumentationData : NSObject {
    NSObject<OS_dispatch_data> *_dataMap;
    const struct MTLSerializedDebugInstrumentationData { unsigned long long x0; struct FlatArray<MTLSerializedDebugInstrumentationData::FlatArray<char> > { unsigned int x0; unsigned int x1; } x1; struct FlatArray<MTLBoundsCheck::DebugLocation> { unsigned int x0; unsigned int x1; } x2; struct FlatArray<MTLBoundsCheck::DebugSubProgram> { unsigned int x0; unsigned int x1; } x3; struct FlatArray<MTLBoundsCheck::ConstantDataHeader> { unsigned int x0; unsigned int x1; } x4; struct FlatArray<unsigned char> { unsigned int x0; unsigned int x1; } x5; struct FlatArray<unsigned char> { unsigned int x0; unsigned int x1; } x6; unsigned int x7; unsigned int x8; unsigned long long x9; union InstrumentationStatusFlags { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x0; unsigned short x1; } x10; } *_data;
    struct vector<const __CFString *, std::__1::allocator<const __CFString *> > { struct __CFString **__begin_; struct __CFString **__end_; struct __compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> > { struct __CFString **__value_; } __end_cap_; } _strings;
    struct vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> > { id *__value_; } x1; } _debugLocations;
    struct vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> > { id *__value_; } x1; } _debugSubPrograms;
    NSData *_globalConstantsData;
    NSObject<OS_dispatch_data> *_userReflectionData;
}

@property (readonly, nonatomic) BOOL hasGlobalConstantsInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasArgumentBufferInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasArgumentLimitsInstrumentationFailures;
@property (readonly, nonatomic) unsigned int threadgroupArgumentOffset;
@property (readonly, nonatomic) unsigned int activeThreadgroupMask;
@property (readonly, nonatomic) unsigned long long bufferAccessMask;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)debugSubProgramForID:(unsigned int)a0;
- (id)debugLocationForID:(unsigned int)a0;
- (id)stringForID:(unsigned int)a0;
- (id)globalConstantsData;
- (id)userReflectionData;

@end
