@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
+ (int)blipTypeForContentType:(id)a0;
+ (int)blipTypeForExtension:(id)a0;
+ (int)blipTypeForImageData:(id)a0;
+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
+ (id)inflatedExtensionForGzippedExtension:(id)a0;

- (void)setName:(id)a0;
- (void)setIndex:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNull;
- (id)blip;
- (int)index;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)effectCount;
- (id)name;
- (id)effects;
- (void)addEffect:(id)a0;
- (void)setEffects:(id)a0;
- (id)effectAtIndex:(unsigned long long)a0;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
- (void)setBlip:(id)a0;
- (void)removeEffectAtIndex:(unsigned long long)a0;

@end
