@class NSArray;

@interface PXArrayDataSection : PXDataSection

@property (readonly, copy, nonatomic) NSArray *sectionContent;

- (id)initWithOutlineObject:(id)a0;
- (id)objectAtIndex:(long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (long long)count;
- (long long)indexOfObject:(id)a0;
- (id)initWithOutlineObject:(id)a0 sectionContent:(id)a1;
- (id)initWithSectionContent:(id)a0;
- (long long)validatedIndexOfObject:(id)a0 hintIndex:(long long)a1;

@end
