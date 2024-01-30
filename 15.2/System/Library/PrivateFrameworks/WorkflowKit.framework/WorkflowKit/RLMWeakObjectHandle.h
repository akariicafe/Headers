@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying> {
    struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table *m_ptr; } m_table; unsigned long long m_row_ndx; struct RowBase *m_prev; struct RowBase *m_next; } _row;
    void *_info;
    Class _objectClass;
}

@property (readonly, nonatomic) RLMObjectBase *object;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;

@end
