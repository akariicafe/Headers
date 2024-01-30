@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *objects;
@property (copy, nonatomic) NSArray *resultObjects;

+ (id)addResultObjectsWithDictionary:(id)a0 context:(id)a1;
+ (id)addResultObjects;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
