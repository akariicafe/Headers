@class NSMutableArray;

@interface SecCBORArray : SecCBORValue {
    NSMutableArray *m_data;
}

- (void)addObject:(id)a0;
- (void)write:(id)a0;
- (id)init;
- (int)fieldType;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
