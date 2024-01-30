@class NSMapTable;

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}

- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;
- (int)fieldType;
- (void)setKey:(id)a0 value:(id)a1;
- (id)getSortedKeys;

@end
