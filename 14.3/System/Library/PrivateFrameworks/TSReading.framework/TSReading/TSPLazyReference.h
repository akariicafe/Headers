@class TSPObject, TSPComponent;
@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <NSCopying> {
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    BOOL _allowUnknownObject;
}

@property (weak, nonatomic) id<TSPLazyReferenceDelegate> delegate;
@property (readonly, nonatomic) long long identifier;
@property (weak, nonatomic) TSPComponent *component;
@property (readonly, nonatomic) TSPObject *weakObject;
@property (retain, nonatomic) TSPObject *strongObject;
@property (nonatomic) BOOL isWeak;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) id objectIfLoaded;

+ (id)referenceForObject:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)resetIdentifier;
- (id)initWithTSPObject:(id)a0;
- (id)initWithDelegate:(id)a0 identifier:(long long)a1 isWeak:(BOOL)a2 allowUnknownObject:(BOOL)a3;
- (BOOL)isEqualToLazyReference:(id)a0;
- (BOOL)referencesObject:(id)a0;
- (BOOL)discardStrongObjectIfPossible;

@end
