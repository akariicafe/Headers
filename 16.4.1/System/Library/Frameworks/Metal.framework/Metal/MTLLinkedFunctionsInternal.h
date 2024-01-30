@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)isEmpty;
- (id)groups;
- (id)binaryFunctions;
- (void)setPrivateFunctions:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)functions;
- (void)setFunctions:(id)a0;
- (void)dealloc;
- (void)setGroups:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setBinaryFunctions:(id)a0;
- (id)privateFunctions;
- (id)description;

@end
