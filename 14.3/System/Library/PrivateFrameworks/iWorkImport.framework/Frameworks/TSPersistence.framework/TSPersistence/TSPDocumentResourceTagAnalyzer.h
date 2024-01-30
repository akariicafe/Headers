@class NSSet, NSMutableDictionary, NSMutableSet;

@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration> {
    NSMutableDictionary *_tagsToDocumentResourceInfosDictionary;
    NSMutableSet *_documentResourceInfos;
    NSMutableSet *_untaggedDocumentResourceInfos;
}

@property (readonly, copy, nonatomic) NSSet *allTags;
@property (readonly, copy, nonatomic) NSSet *allDocumentResourceInfos;
@property (readonly, copy, nonatomic) NSSet *untaggedDocumentResourceInfos;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)description;
- (void)addDocumentResourceInfo:(id)a0;
- (id)minimumTagsWithPreferredTags:(id)a0;

@end
