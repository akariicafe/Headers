@class NSMutableArray;

@interface ESDContainer : ESDObject {
    NSMutableArray *mChildren;
}

+ (void)readChildrenOfObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0 reader:(struct OcReader { } *)a1 toArray:(id)a2;
+ (void)pbReadChildrenOfObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0 toArray:(id)a1 state:(id)a2;

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)childCount;
- (void)removeChild:(id)a0;
- (struct EshGroup { void /* function */ **x0; unsigned short x1; struct EshContentData { struct EshOpt { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x3; struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } x4; } x0; struct EshOpt { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x3; struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } x4; } x1; struct EshOpt { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x3; struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } x4; } x2; struct EshSp { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; unsigned int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; } x3; struct CsRect<int> { int x0[4]; } x4; } x2; void /* function */ **x3; struct EshSpgr *x4; struct EshGroupProperties { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; struct EshRectAtom *x3; } x5; struct EshGroupLocks { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } x6; struct EshDiagram { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } x7; } *)eshGroup;
- (id)childAt:(unsigned long long)a0;
- (id)firstChildOfType:(unsigned short)a0;
- (struct EshContainer { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct ChVector<EshHeader *> { struct EshHeader **x0; struct EshHeader **x1; struct __compressed_pair<EshHeader **, ChAllocator<EshHeader *> > { struct EshHeader **x0; } x2; } x3; } *)eshContainer;
- (id)addEshChild:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (id)addChildOfType:(unsigned short)a0;
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)a0 afterIndex:(unsigned long long)a1;
- (id)containerFromObject:(id)a0 mustExist:(BOOL)a1;
- (id)childOfType:(unsigned short)a0 instance:(short)a1;
- (id)addContainerChildOfType:(unsigned short)a0;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)addAtomChildOfType:(unsigned short)a0;
- (void)insertChild:(id)a0 at:(unsigned long long)a1;
- (id)insertEshChild:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0 at:(unsigned long long)a1;
- (id)firstChildOfType:(unsigned short)a0 afterChild:(id)a1;
- (id)firstChildOfType:(unsigned short)a0 afterIndex:(unsigned long long)a1;
- (id)firstContainerChildOfType:(unsigned short)a0 mustExist:(BOOL)a1;
- (id)containerChildOfType:(unsigned short)a0 instance:(short)a1 mustExist:(BOOL)a2;
- (id)containerChildAt:(unsigned long long)a0;
- (id)shapeContainer;
- (id)initWithEshObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (id)initFromReader:(struct OcReader { } *)a0 type:(unsigned short)a1 version:(unsigned short)a2;
- (void)writeToWriter:(struct OcWriter { } *)a0;
- (id)initForExcelBinaryWithType:(unsigned short)a0 version:(unsigned short)a1 state:(id)a2;
- (id)initPBWithType:(unsigned short)a0 version:(unsigned short)a1 state:(id)a2;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)addPptAtomChildOfType:(unsigned short)a0;
- (id)addPptEshClientChildOfType:(unsigned short)a0;
- (void)addCStringWithNSString:(id)a0 instance:(int)a1;
- (void)addCStringWithChar2String:(const unsigned short *)a0 instance:(int)a1;
- (id)addPptContainerChildOfType:(unsigned short)a0;

@end
