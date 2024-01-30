@class NSMapTable;

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}

- (void)write:(id)a0;
- (id)init;
- (int)fieldType;
- (void).cxx_destruct;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;

@end
