@class NSData;

@interface SecCBORData : SecCBORValue {
    NSData *m_data;
}

- (void)write:(id)a0;
- (int)fieldType;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
