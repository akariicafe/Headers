@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
+ (int)blipTypeForContentType:(id)a0;
+ (int)blipTypeForExtension:(id)a0;
+ (int)blipTypeForImageData:(id)a0;
+ (id)inflatedExtensionForGzippedExtension:(id)a0;

- (void)setIndex:(int)a0;
- (id)effects;
- (BOOL)isNull;
- (int)index;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)setName:(id)a0;
- (id)description;
- (void)addEffect:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)setEffects:(id)a0;
- (unsigned long long)effectCount;
- (id)blip;
- (id)effectAtIndex:(unsigned long long)a0;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
- (void)removeEffectAtIndex:(unsigned long long)a0;
- (void)setBlip:(id)a0;

@end
