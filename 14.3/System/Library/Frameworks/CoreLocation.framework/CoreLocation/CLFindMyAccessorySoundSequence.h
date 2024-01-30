@class NSData, NSMutableData;

@interface CLFindMyAccessorySoundSequence : NSObject {
    NSMutableData *_encodedSequence;
}

@property (readonly) NSData *encodedSequence;

+ (id)defaultSequence;
+ (id)rangingSequence;

- (id)init;
- (void)dealloc;
- (void)addSoundBlockWithAsset:(unsigned long long)a0 loopCount:(unsigned char)a1 duration:(unsigned short)a2;

@end
