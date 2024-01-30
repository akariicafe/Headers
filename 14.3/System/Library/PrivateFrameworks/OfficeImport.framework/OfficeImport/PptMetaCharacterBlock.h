@interface PptMetaCharacterBlock : NSObject {
    int mType;
    int mPosition;
    int mExtraData;
}

- (int)position;
- (int)type;
- (void)setPosition:(int)a0;
- (int)extraData;
- (id)initWithType:(int)a0 position:(int)a1 extraData:(int)a2;
- (id)initWithType:(int)a0 position:(int)a1;

@end
