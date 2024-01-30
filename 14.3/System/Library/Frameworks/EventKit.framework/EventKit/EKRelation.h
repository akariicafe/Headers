@class NSSet, NSString;

@interface EKRelation : NSObject {
    NSString *_entityName;
    BOOL _toMany;
    BOOL _ownsRelated;
    NSSet *_inversePropertyNames;
}

@property (readonly, nonatomic) BOOL toMany;
@property (readonly, nonatomic) NSSet *inversePropertyNames;
@property (readonly, nonatomic) BOOL ownsRelatedObject;
@property (copy, nonatomic) id /* block */ inversePropertyIsApplicable;

+ (id)relationWithEntityName:(id)a0 toMany:(BOOL)a1 inversePropertyNames:(id)a2 ownsRelated:(BOOL)a3;
+ (id)relationWithEntityName:(id)a0 toMany:(BOOL)a1 inversePropertyNames:(id)a2;

- (BOOL)shouldSetInverseProperty:(id)a0 onObject:(id)a1 forObject:(id)a2;
- (void).cxx_destruct;
- (id)initWithEntityName:(id)a0 toMany:(BOOL)a1 inversePropertyNames:(id)a2 ownsRelated:(BOOL)a3;
- (id)description;

@end
