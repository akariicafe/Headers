@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {
    void *_reserved;
}

@property (readonly, weak, nonatomic) AVAudioNode *node;
@property (readonly, nonatomic) unsigned long long bus;

+ (id)connectionPointWithNode:(id)a0 bus:(unsigned long long)a1;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithNode:(id)a0 bus:(unsigned long long)a1;

@end
