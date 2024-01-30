@interface MTLTextureArgument : MTLArgumentInternal {
    unsigned short _textureType : 15;
    unsigned char _isDepthTexture : 1;
    unsigned short _textureDataType;
}

- (unsigned long long)textureType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)textureDataType;
- (BOOL)isDepthTexture;
- (id)initWithName:(id)a0 access:(unsigned long long)a1 isActive:(BOOL)a2 locationIndex:(unsigned long long)a3 arraySize:(unsigned long long)a4 dataType:(unsigned long long)a5 textureType:(unsigned long long)a6 isDepthTexture:(BOOL)a7;

@end
