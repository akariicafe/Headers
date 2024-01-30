@class MTLStructTypeInternal, MTLStructType, NSString, MTLType, MTLArgument, MTLPointerType;

@interface MTLBindingInternal : MTLArgument <MTLArgumentCompat, MTLBinding> {
    MTLType *_typeInfo;
}

@property BOOL isUsed;
@property (getter=isArgument, setter=setIsArgument:) BOOL argument;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long textureDataType;
@property (readonly) BOOL isDepthTexture;
@property (readonly) unsigned long long objectPayloadAlignment;
@property (readonly) unsigned long long objectPayloadDataSize;
@property (readonly) unsigned long long meshVertexCount;
@property (readonly) unsigned long long meshPrimitiveCount;
@property (readonly) unsigned long long meshTopologyType;
@property (readonly) MTLStructTypeInternal *meshVertexStruct;
@property (readonly) MTLStructTypeInternal *meshPrimitiveStruct;
@property (readonly) MTLArgument *bufferIndirectArgumentType;
@property (readonly) unsigned long long indirectConstantAlignment;
@property (readonly) unsigned long long indirectConstantDataSize;
@property (readonly) unsigned long long indirectConstantDataType;
@property (readonly) unsigned long long bufferPixelFormat;
@property (readonly) unsigned long long bufferALUType;
@property (readonly) MTLStructType *structType;
@property (readonly) unsigned long long builtInType;
@property (readonly) unsigned long long builtInDataType;
@property (readonly) unsigned long long imageBlockKind;
@property (readonly) unsigned long long imageBlockDataSize;
@property (readonly) MTLStructTypeInternal *imageBlockMasterStructMembers;
@property (readonly) BOOL aliasImplicitImageBlock;
@property (readonly) unsigned long long aliasImplicitImageBlockRenderTarget;
@property (readonly, getter=isVertexDescriptorBuffer) BOOL vertexDescriptorBuffer;
@property (readonly) unsigned long long threadgroupMemoryDataType;
@property (readonly) MTLStructType *threadgroupMemoryStructType;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isUsed) BOOL used;

- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5 typeDescription:(id)a6;
- (id)dataTypeDescription;
- (id)formattedDescription:(unsigned long long)a0;
- (id)structType;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5;
- (void)dealloc;

@end
