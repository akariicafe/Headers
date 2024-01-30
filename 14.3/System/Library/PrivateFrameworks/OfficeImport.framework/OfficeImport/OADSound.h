@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (int)sizeInBytes;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setSizeInBytes:(int)a0;
- (BOOL)isLoaded;
- (id)soundData;
- (void)setSoundData:(id)a0;

@end
