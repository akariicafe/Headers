@class NSString;

@interface MTLTextureBindingInternal : MTLBindingInternal <MTLTextureBinding> {
    unsigned short _textureType : 15;
    unsigned char _isDepthTexture : 1;
    unsigned short _textureDataType;
}

@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long textureDataType;
@property (readonly, getter=isDepthTexture) BOOL depthTexture;
@property (readonly) unsigned long long arrayLength;
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

- (id)initWithName:(id)a0 access:(unsigned long long)a1 isActive:(BOOL)a2 locationIndex:(unsigned long long)a3 arraySize:(unsigned long long)a4 dataType:(unsigned long long)a5 textureType:(unsigned long long)a6 isDepthTexture:(BOOL)a7;
- (id)formattedDescription:(unsigned long long)a0;

@end
