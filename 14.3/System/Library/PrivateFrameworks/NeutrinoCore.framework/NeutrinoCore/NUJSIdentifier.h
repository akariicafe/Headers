@class NUIdentifier;

@interface NUJSIdentifier : NUJSObject

@property (readonly, nonatomic) NUIdentifier *identifier;

- (id)initWithIdentifier:(id)a0 context:(id)a1;
- (id)toString;
- (BOOL)hasProperty:(id)a0;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;

@end
