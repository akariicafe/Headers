@interface JTAudioMediaItem : JFXMediaItem

- (id)description;
- (id)info;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)hasAudibleCharacteristic;
- (id)initWithInfo:(id)a0 delegate:(id)a1;

@end
