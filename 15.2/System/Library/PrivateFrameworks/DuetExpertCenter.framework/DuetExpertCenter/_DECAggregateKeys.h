@interface _DECAggregateKeys : NSObject

+ (id)featureIdentifier;
+ (id)keyForExpert:(id)a0 subkey:(id)a1;
+ (id)keyForExpert:(id)a0 prefix:(id)a1;
+ (id)keyWithExpertIdentifier:(id)a0;
+ (id)consumerSubtypeProperty;
+ (id)keyWithExpertIdentifier:(id)a0 subkey:(id)a1 suffix:(id)a2;
+ (id)abGroupNilString;
+ (id)expertProperty;
+ (id)consumerProperty;
+ (id)keyWithExpertIdentifier:(id)a0 category:(unsigned long long)a1 consumerString:(id)a2 prefix:(id)a3;
+ (id)outcomeProperty;
+ (id)keyWithExpertIdentifier:(id)a0 category:(unsigned long long)a1 consumer:(unsigned long long)a2 prefix:(id)a3;
+ (id)keyWithExpertIdentifier:(id)a0 prefix:(id)a1;
+ (id)keyWithSubkey:(id)a0;
+ (id)timingKeyForExpert:(id)a0 subkey:(id)a1;
+ (id)timingKeyWithExpertIdentifier:(id)a0 subkey:(id)a1;
+ (id)categoryProperty;
+ (id)keyForExpert:(id)a0;
+ (id)keyForExpert:(id)a0 subkey:(id)a1 suffix:(id)a2;
+ (id)reasonProperty;
+ (id)keyWithComponents:(id)a0;
+ (id)keyWithExpertIdentifier:(id)a0 subkey:(id)a1;

@end
