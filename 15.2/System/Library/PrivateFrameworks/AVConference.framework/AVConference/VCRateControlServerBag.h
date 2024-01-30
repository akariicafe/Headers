@class NSDictionary;

@interface VCRateControlServerBag : NSObject {
    NSDictionary *_serverBagDict;
    int _operatingMode;
}

+ (id)groupKeysWithMode:(int)a0 primaryKey:(id)a1;
+ (id)profileNumberKeyWithMode:(int)a0;
+ (id)prefixForMode:(int)a0;
+ (id)keysWithMode:(int)a0;

- (void)dealloc;
- (BOOL)containsAllSecondaryKeysWithPrimaryKey:(id)a0;
- (id)valueForSecondaryKeyWithPrimaryKey:(id)a0 secondaryKey:(id)a1 type:(int)a2;
- (id)initWithMode:(int)a0 serverBagDict:(id)a1;

@end
