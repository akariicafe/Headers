@class NSString, NSMutableDictionary, PVEffect;

@interface ClipBackground : NSObject <NSCopying> {
    PVEffect *_effect;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableDictionary *backgroundEffectSettings;
@property (readonly, nonatomic) NSString *effectID;
@property (readonly, nonatomic) PVEffect *backgroundEffect;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
