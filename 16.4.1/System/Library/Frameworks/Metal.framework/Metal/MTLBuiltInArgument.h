@interface MTLBuiltInArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (unsigned long long)builtInDataType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)builtInType;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(BOOL)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6;

@end
