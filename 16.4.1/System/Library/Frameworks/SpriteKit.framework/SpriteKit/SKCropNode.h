@class SKNode;

@interface SKCropNode : SKNode {
    SKNode *_mask;
    void *_skcCropNode;
}

@property (nonatomic) BOOL prefersAlphaMask;
@property (nonatomic) BOOL invertMask;
@property (retain, nonatomic) SKNode *maskNode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToNode:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)useAlphaMask:(BOOL)a0;

@end
