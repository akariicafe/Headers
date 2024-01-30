@class PXGLayout, NSString;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing>

@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) long long layoutVersion;
@property (weak, nonatomic) PXGLayout *layout;
@property (nonatomic) BOOL isDynamic;
@property (readonly, nonatomic) BOOL isValid;
@property (retain, nonatomic) id objectReference;
@property (readonly, nonatomic) BOOL hasObjectReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)a0 appliedToLayout:(id)a1;

@end
