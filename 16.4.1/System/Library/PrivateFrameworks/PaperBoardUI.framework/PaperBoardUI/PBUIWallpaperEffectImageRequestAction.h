@class NSString;

@interface PBUIWallpaperEffectImageRequestAction : BSAction

@property (readonly, copy, nonatomic) NSString *slotIdentifier;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithSlotIdentifier:(id)a0 forResponseOnQueue:(id)a1 withHandler:(id /* block */)a2;

@end
