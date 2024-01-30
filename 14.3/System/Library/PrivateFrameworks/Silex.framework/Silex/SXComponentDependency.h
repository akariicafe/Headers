@class NSString, SXComponentDependencyDescriptor;

@interface SXComponentDependency : NSObject {
    NSString *_fromComponentIdentifier;
    NSString *_toComponentIdentifier;
    long long _fromDependencyAttribute;
    long long _toDependencyAttribute;
    SXComponentDependencyDescriptor *_descriptor;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
