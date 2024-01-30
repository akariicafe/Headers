@class NSArray, NSString;

@interface CARemoteEffectGroup : CARemoteEffect

@property (copy) NSArray *effects;
@property (copy) NSString *groupName;
@property (getter=isMatched) BOOL matched;
@property (getter=isSource) BOOL source;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)groupWithEffects:(id)a0;

- (void)dealloc;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)init;
- (id)name;
- (BOOL)_setCARenderRemoteEffect:(void *)a0 layer:(void *)a1;
- (void *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 preservingEffectId:(BOOL)a1;
- (id)initWithEffects:(id)a0;

@end
