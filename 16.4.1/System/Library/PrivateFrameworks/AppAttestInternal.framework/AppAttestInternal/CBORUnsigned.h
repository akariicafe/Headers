@interface CBORUnsigned : CBORValue {
    unsigned long long m_data;
}

- (void)write:(id)a0;
- (long long)compare:(id)a0;
- (int)fieldType;
- (id)initWith:(unsigned long long)a0;
- (id)getLabel;

@end
