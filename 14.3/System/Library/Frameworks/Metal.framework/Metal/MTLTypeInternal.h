@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)dataType;
- (id)description;
- (id)initWithDataType:(unsigned long long)a0;

@end
