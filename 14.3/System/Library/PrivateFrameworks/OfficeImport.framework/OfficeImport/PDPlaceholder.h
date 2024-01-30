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
- (id)init;
- (unsigned int)index;
- (void)setType:(int)a0;
- (int)size;
- (int)orientation;
- (id)description;
- (int)type;
- (void)setSize:(int)a0;
- (void)setOrientation:(int)a0;
- (int)boundsTrack;
- (void)setBoundsTrack:(int)a0;

@end
