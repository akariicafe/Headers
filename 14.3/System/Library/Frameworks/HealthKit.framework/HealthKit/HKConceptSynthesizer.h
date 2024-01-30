@interface HKConceptSynthesizer : NSObject

+ (id)synthesizeConceptWithIdentifier:(id)a0 forCodingCollection:(id)a1;
+ (id)proritizedCodingSystemsForDisplay;
+ (id)_synthesizeConceptWithIdentifier:(id)a0 forCodingCollection:(id)a1 prioritizedCodingSystems:(id)a2;
+ (id)adHocCodingForCodingCollection:(id)a0;
+ (id)bestCodingSystemForDisplayForCodingCollection:(id)a0 prioritizedCodingSystems:(id)a1;
+ (id)privateCodeCreationCodingSortDescriptors;
+ (id)bestDisplayNameForCodingCollection:(id)a0 prioritizedCodingSystems:(id)a1;
+ (id)bestDisplayNameForCodingCollection:(id)a0;
+ (id)enumerateCodingsBySystem:(id)a0 prioritizingCodingSystems:(id)a1 handler:(id /* block */)a2;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)a0;

@end
