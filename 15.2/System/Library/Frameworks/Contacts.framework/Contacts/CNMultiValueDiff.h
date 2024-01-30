@class NSArray;

@interface CNMultiValueDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *updates;

+ (id)emptyDiff;
+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;

- (BOOL)applyToABPerson:(void *)a0 propertyDescription:(id)a1 logger:(id)a2 error:(id *)a3;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)a0;
- (id)multiValueByApplyToMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
