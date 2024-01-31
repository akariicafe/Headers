@class NSArray;

@interface CNMultiValueDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *updates;

+ (id)emptyDiff;
+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)applyToABPerson:(void *)a0 propertyDescription:(id)a1 isUnified:(BOOL)a2 logger:(id)a3 error:(id *)a4;
- (id)initWithUpdates:(id)a0;
- (id)multiValueByApplyToMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
