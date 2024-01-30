@class NSString;

@interface MTLThreadgroupMemoryBindingInternal : MTLBindingInternal <MTLThreadgroupBinding> {
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _dataType;
}

@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isUsed) BOOL used;
@property (readonly, getter=isArgument) BOOL argument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStructType:(id)a0 doRetain:(BOOL)a1;
- (id)threadgroupMemoryStructType;
- (id)formattedDescription:(unsigned long long)a0;
- (id)structType;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 arraySize:(unsigned long long)a5 dataType:(unsigned long long)a6 dataSize:(unsigned long long)a7 alignment:(unsigned long long)a8;
- (unsigned long long)threadgroupMemoryDataType;
- (void)setStructType:(id)a0;

@end
