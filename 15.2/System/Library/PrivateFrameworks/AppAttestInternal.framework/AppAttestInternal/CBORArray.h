@class NSMutableArray;

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}

- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (int)fieldType;
- (id)initWith:(id)a0;

@end
