@class NSString, NSMutableSet;

@interface SXComponentNode : NSObject {
    NSString *_componentIdentifier;
    long long _attribute;
    NSMutableSet *_mutableDependencies;
    NSMutableSet *_toPositionDependencies;
    NSMutableSet *_toSizeDependencies;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
