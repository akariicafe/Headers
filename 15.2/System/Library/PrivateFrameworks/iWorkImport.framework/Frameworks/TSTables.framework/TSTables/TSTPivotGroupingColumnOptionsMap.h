@interface TSTPivotGroupingColumnOptionsMap : TSPObject <NSCopying> {
    struct map<TSKUIDStruct, TSTPivotGroupingColumnOptions *, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> { struct __tree<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>, std::allocator<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSTPivotGroupingColumnOptions *>, std::less<TSKUIDStruct>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _optionsForUidMap;
}

- (void)clear;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; })keys;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (BOOL)hasContent;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)pivotOptionsForUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateOptionsUsingBlock:(id /* block */)a0;
- (void)setPivotOptions:(id)a0 forUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (id)prunedCopyWithUids:(void *)a0;

@end
