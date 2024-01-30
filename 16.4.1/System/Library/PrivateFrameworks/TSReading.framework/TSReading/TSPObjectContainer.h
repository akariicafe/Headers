@class NSArray;

@interface TSPObjectContainer : TSPObject {
    unsigned char _packageIdentifier;
    NSArray *_childObjects;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (unsigned int)delayedArchivingPriority;
- (id)initWithContext:(id)a0 packageIdentifier:(unsigned char)a1;
- (id)packageLocator;
- (void)prepareForComponentWriteWithDelayedObjects:(id)a0;
- (BOOL)shouldDelayArchiving;
- (long long)tsp_identifier;

@end
