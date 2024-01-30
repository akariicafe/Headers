@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (retain, nonatomic) POPAnimatableProperty *property;
@property (copy, nonatomic) id fromValue;
@property (copy, nonatomic) id toValue;
@property (nonatomic) double roundingFactor;
@property (nonatomic) unsigned long long clampMode;
@property (nonatomic, getter=isAdditive) BOOL additive;

+ (id)animationWithCustomPropertyNamed:(id)a0 readBlock:(id /* block */)a1 writeBlock:(id /* block */)a2;
+ (id)animationWithCustomPropertyReadBlock:(id /* block */)a0 writeBlock:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)currentValue;
- (void)_initState;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (id)progressMarkers;
- (void)setProgressMarkers:(id)a0;

@end
