@class NUIdentifier;

@interface NUJSIdentifier : NUJSObject

@property (readonly, nonatomic) NUIdentifier *identifier;

- (BOOL)hasProperty:(id)a0;
- (id)toString;
- (id)initWithIdentifier:(id)a0 context:(id)a1;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
