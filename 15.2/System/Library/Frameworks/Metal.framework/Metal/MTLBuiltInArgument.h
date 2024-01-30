@interface MTLBuiltInArgument : MTLArgumentInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 active:(BOOL)a3 index:(unsigned long long)a4 dataType:(unsigned long long)a5 builtInType:(unsigned long long)a6;
- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;

@end
