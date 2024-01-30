@class NSArray;

@interface FIIntervalSetDefinition : NSObject <FIDictionaryRepresentable>

@property (readonly, nonatomic) NSArray *intervalDefinitions;
@property (readonly, nonatomic) long long repeatCount;
@property (readonly, nonatomic) long long setType;
@property (readonly, nonatomic) unsigned long long intervalCount;

+ (id)definitionFromDictionary:(id)a0 error:(id *)a1;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)intervalCount;
- (id)byAddingIntervalDefinition:(id)a0;
- (id)byChangingRepeatCount:(long long)a0;
- (id)byChangingSetType:(long long)a0;
- (id)byInsertingIntervalDefinition:(id)a0 atIndex:(unsigned long long)a1;
- (id)byRemovingIntervalDefinitionAtIndex:(unsigned long long)a0;
- (id)byReplacingIntervalDefinitionAtIndex:(unsigned long long)a0 withIntervalDefinition:(id)a1;
- (id)initWithIntervalDefinitions:(id)a0 repeatCount:(long long)a1 setType:(long long)a2;
- (id)intervalAtIndex:(unsigned long long)a0;

@end
