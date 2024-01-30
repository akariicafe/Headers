@class NSString, NSArray, NSPredicate, UITextRange;

@interface SBHIconLibraryQuery : NSObject <NSCopying> {
    NSPredicate *_predicate;
}

@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ comparator;
@property (copy, nonatomic) NSString *keyboardLanguageHint;
@property (readonly, copy, nonatomic) UITextRange *markedTextRange;
@property (readonly, copy, nonatomic) NSArray *markedTextArray;

+ (BOOL)string:(id)a0 matchesSearchString:(id)a1;

- (id /* block */)aToZComparator;
- (id)description;
- (id /* block */)prefixComparator;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSearchString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)_composeComparator:(id /* block */)a0 andComparator:(id /* block */)a1;
- (unsigned long long)hash;
- (BOOL)_hasSearchString;
- (id)initWithMarkedTextSearchString:(id)a0 markedTextRange:(id)a1 markedTextArray:(id)a2;

@end
