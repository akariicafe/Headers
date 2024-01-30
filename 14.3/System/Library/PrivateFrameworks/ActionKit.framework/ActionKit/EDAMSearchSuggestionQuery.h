@class NSString, EDAMNoteFilter;

@interface EDAMSearchSuggestionQuery : FATObject

@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) EDAMNoteFilter *contextFilter;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
