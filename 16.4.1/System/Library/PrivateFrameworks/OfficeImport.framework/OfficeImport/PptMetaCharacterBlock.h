@interface PptMetaCharacterBlock : NSObject {
    int mType;
    int mPosition;
    int mExtraData;
}

- (void)setPosition:(int)a0;
- (int)position;
- (int)type;
- (int)extraData;
- (id)initWithType:(int)a0 position:(int)a1;
- (id)initWithType:(int)a0 position:(int)a1 extraData:(int)a2;

@end
