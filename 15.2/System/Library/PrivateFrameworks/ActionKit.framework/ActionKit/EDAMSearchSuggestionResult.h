@class NSArray;

@interface EDAMSearchSuggestionResult : FATObject

@property (retain, nonatomic) NSArray *typeAheadSuggestions;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
