@interface _DECAggregateKeys : NSObject

+ (id)keyWithSubkey:(id)a0;
+ (id)featureIdentifier;
+ (id)keyWithExpertIdentifier:(id)a0 subkey:(id)a1 suffix:(id)a2;
+ (id)categoryProperty;
+ (id)reasonProperty;
+ (id)keyWithExpertIdentifier:(id)a0 prefix:(id)a1;
+ (id)consumerSubtypeProperty;
+ (id)keyForExpert:(id)a0;
+ (id)keyWithComponents:(id)a0;
+ (id)timingKeyWithExpertIdentifier:(id)a0 subkey:(id)a1;
+ (id)keyForExpert:(id)a0 subkey:(id)a1 suffix:(id)a2;
+ (id)keyForExpert:(id)a0 prefix:(id)a1;
+ (id)outcomeProperty;
+ (id)abGroupNilString;
+ (id)keyWithExpertIdentifier:(id)a0 category:(unsigned long long)a1 consumer:(unsigned long long)a2 prefix:(id)a3;
+ (id)keyWithExpertIdentifier:(id)a0 subkey:(id)a1;
+ (id)keyWithExpertIdentifier:(id)a0;
+ (id)expertProperty;
+ (id)consumerProperty;
+ (id)keyForExpert:(id)a0 subkey:(id)a1;
+ (id)timingKeyForExpert:(id)a0 subkey:(id)a1;
+ (id)keyWithExpertIdentifier:(id)a0 category:(unsigned long long)a1 consumerString:(id)a2 prefix:(id)a3;

@end
