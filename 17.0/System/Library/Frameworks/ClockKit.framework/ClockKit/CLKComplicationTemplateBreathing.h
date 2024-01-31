@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate {
    long long _family;
}

@property (nonatomic) long long sessionCount;

+ (id)breathingTemplateWithFamily:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFamily:(long long)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;

@end
