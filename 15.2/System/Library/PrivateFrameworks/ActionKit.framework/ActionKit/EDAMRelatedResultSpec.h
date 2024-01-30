@class NSNumber, NSSet;

@interface EDAMRelatedResultSpec : FATObject

@property (retain, nonatomic) NSNumber *maxNotes;
@property (retain, nonatomic) NSNumber *maxNotebooks;
@property (retain, nonatomic) NSNumber *maxTags;
@property (retain, nonatomic) NSNumber *writableNotebooksOnly;
@property (retain, nonatomic) NSNumber *includeContainingNotebooks;
@property (retain, nonatomic) NSNumber *includeDebugInfo;
@property (retain, nonatomic) NSNumber *maxExperts;
@property (retain, nonatomic) NSNumber *maxRelatedContent;
@property (retain, nonatomic) NSSet *relatedContentTypes;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
