@class NSDictionary, NSString;

@interface CARemotePropertyEffect : CARemoteEffect

@property (retain, nonatomic) NSDictionary *valuesByState;
@property (copy) NSString *keyPath;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)effectWithKeyPath:(id)a0;

- (void)dealloc;
- (void)setValue:(id)a0 forState:(id)a1;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)initWithKeyPath:(id)a0;
- (id)name;
- (BOOL)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (void *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(BOOL)a1;
- (void)_setValuesByState:(struct __CFDictionary { } *)a0;
- (id)valueForState:(id)a0;

@end
