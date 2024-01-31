@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {
    long long _family;
}

@property (nonatomic) double movePercentComplete;
@property (nonatomic) double exercisePercentComplete;
@property (nonatomic) double standPercentComplete;
@property (nonatomic, getter=dotsAreHidden) BOOL hideDots;

+ (id)activityTemplateWithFamily:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFamily:(long long)a0;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;

@end
