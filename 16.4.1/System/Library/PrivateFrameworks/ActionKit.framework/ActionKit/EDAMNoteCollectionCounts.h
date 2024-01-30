@class NSDictionary, NSNumber;

@interface EDAMNoteCollectionCounts : FATObject

@property (retain, nonatomic) NSDictionary *notebookCounts;
@property (retain, nonatomic) NSDictionary *tagCounts;
@property (retain, nonatomic) NSNumber *trashCount;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
