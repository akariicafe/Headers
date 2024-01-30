@class NSString, SXComponentDependencyDescriptor;

@interface SXComponentDependency : NSObject {
    NSString *_fromComponentIdentifier;
    NSString *_toComponentIdentifier;
    long long _fromDependencyAttribute;
    long long _toDependencyAttribute;
    SXComponentDependencyDescriptor *_descriptor;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
