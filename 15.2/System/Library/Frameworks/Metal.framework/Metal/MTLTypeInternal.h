@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (unsigned long long)dataType;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithDataType:(unsigned long long)a0;

@end
