@interface SPUIWebCompletion : SPUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;
+ (BOOL)cardSectionIsWeb:(id)a0;

- (BOOL)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)prefixMatchExtensionString;
- (id)nonPrefixMatchExtensionString;

@end
