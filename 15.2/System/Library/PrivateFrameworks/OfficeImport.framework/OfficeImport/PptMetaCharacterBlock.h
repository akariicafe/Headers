@interface PptMetaCharacterBlock : NSObject {
    int mType;
    int mPosition;
    int mExtraData;
}

- (void)setPosition:(int)a0;
- (int)position;
- (int)extraData;
- (int)type;
- (id)initWithType:(int)a0 position:(int)a1 extraData:(int)a2;
- (id)initWithType:(int)a0 position:(int)a1;

@end
