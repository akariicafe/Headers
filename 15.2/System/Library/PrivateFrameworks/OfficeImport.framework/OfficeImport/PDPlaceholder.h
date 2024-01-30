@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (BOOL)isTextType:(int)a0;
+ (BOOL)isNonTextType:(int)a0;

- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (int)size;
- (id)description;
- (int)orientation;
- (void)setOrientation:(int)a0;
- (id)init;
- (void)setSize:(int)a0;
- (int)type;
- (void)setType:(int)a0;
- (int)boundsTrack;
- (void)setBoundsTrack:(int)a0;

@end
