@class NSMutableArray;

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (int)fieldType;
- (void)addObject:(id)a0;
- (id)initWith:(id)a0;

@end
