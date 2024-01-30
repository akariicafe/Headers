@class NSDictionary, NSSet;

@interface HKSPDictionaryDiff : NSObject

@property (readonly, nonatomic) NSDictionary *updatedProperties;
@property (readonly, nonatomic) NSSet *removedKeys;
@property (readonly, nonatomic) BOOL equalDictionaries;

- (void).cxx_destruct;
- (id)initWithOriginalDictionary:(id)a0 updatedDictionary:(id)a1 keysToDiff:(id)a2;

@end
