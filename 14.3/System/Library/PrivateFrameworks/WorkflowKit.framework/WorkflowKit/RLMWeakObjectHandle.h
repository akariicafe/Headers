@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying> {
    struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table *m_ptr; } m_table; unsigned long long m_row_ndx; struct RowBase *m_prev; struct RowBase *m_next; } _row;
    struct RLMClassInfo { id x0; id x1; struct ObjectSchema *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo **x0; struct RLMObservationInfo **x1; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo **x0; } x2; } x3; struct Table *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo **x0; struct RLMClassInfo **x1; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo **x0; } x2; } x5; } *_info;
    Class _objectClass;
}

@property (readonly, nonatomic) RLMObjectBase *object;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (id).cxx_construct;

@end
