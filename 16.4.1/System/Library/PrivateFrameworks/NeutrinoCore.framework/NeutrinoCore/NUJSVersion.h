@class NUVersion;

@interface NUJSVersion : NUJSObject

@property (readonly, nonatomic) NUVersion *version;

- (BOOL)hasProperty:(id)a0;
- (id)toString;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)initWithVersion:(id)a0 context:(id)a1;

@end
