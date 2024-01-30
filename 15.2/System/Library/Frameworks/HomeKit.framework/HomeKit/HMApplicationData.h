@class NSSet, NSMutableDictionary, NSArray;

@interface HMApplicationData : NSObject

@property (retain, nonatomic) NSMutableDictionary *applicationData;
@property (retain, nonatomic) NSSet *allowedObjectClasses;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)dictionary;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithContentsOfDictionary:(id)a0 allowedObjectClasses:(id)a1;
- (id)initWithContentsOfDictionary:(id)a0;
- (BOOL)isAllowedClassForObject:(id)a0;

@end
