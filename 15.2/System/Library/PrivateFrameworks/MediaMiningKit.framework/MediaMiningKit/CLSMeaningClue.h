@interface CLSMeaningClue : CLSClue

@property (retain) id relatedData;

+ (id)clueWithValue:(id)a0 forKey:(id)a1 confidence:(double)a2 relevance:(double)a3;
+ (id)clueWithValue:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToClue:(id)a0;

@end
