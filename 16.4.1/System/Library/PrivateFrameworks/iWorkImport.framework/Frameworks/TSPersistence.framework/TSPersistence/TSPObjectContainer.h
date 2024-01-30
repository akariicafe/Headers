@class NSArray;

@interface TSPObjectContainer : TSPObject {
    unsigned char _packageIdentifier;
}

@property (readonly, nonatomic) NSArray *childObjects;

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)a0;
+ (BOOL)tsp_isInternalObjectContainerClass;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (unsigned int)delayedArchivingPriority;
- (id)initWithContext:(id)a0 packageIdentifier:(unsigned char)a1;
- (id)packageLocator;
- (void)prepareForComponentWriteWithDelayedObjects:(id)a0;
- (BOOL)shouldDelayArchiving;
- (long long)tsp_identifier;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned char)componentRequiredPackageIdentifier;

@end
