@class NSString;

@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldConvertEqualsToContainsForKey:(id)a0;
- (id)messageCriterionConverter:(id)a0 predicateKeysForCriterionType:(long long)a1;
- (unsigned long long)messageCriterionConverter:(id)a0 willUsePredicateOperatorType:(unsigned long long)a1 forKey:(id)a2;

@end
