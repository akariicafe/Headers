@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)functions;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFunctions:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)privateFunctions;
- (void)setGroups:(id)a0;
- (id)description;
- (void)setBinaryFunctions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)groups;
- (id)binaryFunctions;
- (void)setPrivateFunctions:(id)a0;

@end
