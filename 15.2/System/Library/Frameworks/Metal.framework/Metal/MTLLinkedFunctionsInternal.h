@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setFunctions:(id)a0;
- (id)privateFunctions;
- (id)binaryFunctions;
- (void)setBinaryFunctions:(id)a0;
- (void)setPrivateFunctions:(id)a0;
- (id)functions;
- (id)description;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (void)setGroups:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)groups;

@end
