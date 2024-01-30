@class NSArray;

@interface TSPObjectContainer : TSPObject {
    unsigned char _packageIdentifier;
}

@property (readonly, nonatomic) NSArray *childObjects;

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)a0;
+ (BOOL)tsp_isInternalObjectContainerClass;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)packageLocator;
- (BOOL)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (long long)tsp_identifier;
- (id)initWithContext:(id)a0 packageIdentifier:(unsigned char)a1;
- (void)prepareForComponentWriteWithDelayedObjects:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned char)componentRequiredPackageIdentifier;

@end
