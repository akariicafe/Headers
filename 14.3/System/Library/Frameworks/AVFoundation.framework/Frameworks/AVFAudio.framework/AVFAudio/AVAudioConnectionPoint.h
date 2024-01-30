@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {
    void *_reserved;
}

@property (readonly, weak, nonatomic) AVAudioNode *node;
@property (readonly, nonatomic) unsigned long long bus;

+ (id)connectionPointWithNode:(id)a0 bus:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (id)initWithNode:(id)a0 bus:(unsigned long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
