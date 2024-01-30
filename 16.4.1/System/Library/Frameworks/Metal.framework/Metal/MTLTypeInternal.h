@interface MTLTypeInternal : MTLType {
    unsigned long long _dataType;
}

- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)description;
- (id)initWithDataType:(unsigned long long)a0;

@end
