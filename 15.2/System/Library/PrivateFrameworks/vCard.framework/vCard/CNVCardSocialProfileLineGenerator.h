@interface CNVCardSocialProfileLineGenerator : CNVCardLineGenerator

- (id)lineWithValue:(id)a0 label:(id)a1;
- (void)addPrimaryValueMarkerToLine:(id)a0;
- (void)addStandardLabel:(id)a0 toLine:(id)a1;
- (void)addCustomLabel:(id)a0 toLine:(id)a1;
- (BOOL)isStandardServiceName:(id)a0;

@end
