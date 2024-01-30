@class NSSet, NSMutableDictionary, NSArray;

@interface HMApplicationData : NSObject

@property (retain, nonatomic) NSMutableDictionary *applicationData;
@property (retain, nonatomic) NSSet *allowedObjectClasses;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (BOOL)isAllowedClassForObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithContentsOfDictionary:(id)a0 allowedObjectClasses:(id)a1;
- (id)initWithContentsOfDictionary:(id)a0;

@end
