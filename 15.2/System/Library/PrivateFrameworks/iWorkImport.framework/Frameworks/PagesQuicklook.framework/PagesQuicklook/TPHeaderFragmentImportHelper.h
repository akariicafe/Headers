@class TSPObjectContext, NSCharacterSet;

@interface TPHeaderFragmentImportHelper : NSObject {
    id *_fragments;
    TSPObjectContext *_storageContext;
    TSPObjectContext *_objectsContext;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_nonWhitespaceCharacterSet;
}

- (void).cxx_destruct;
- (id)initWithFragments:(id *)a0 storageContext:(id)a1 objectsContext:(id)a2;
- (void)processFragmentsForSpaceFormatting;
- (BOOL)p_storageIsEffectivelyEmpty:(id)a0;
- (unsigned long long)countOfWhitespaceRunsInString:(id)a0 ranges:(struct _NSRange { unsigned long long x0; unsigned long long x1; }[2])a1;
- (void)p_splitStorageInThree:(long long)a0 withRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; }[2])a1;
- (void)p_splitStorageInTwo:(long long)a0 withRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; }[2])a1 firstTarget:(long long)a2 secondTarget:(long long)a3;

@end
