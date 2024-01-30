@class NSString;

@interface EDAMSearchSuggestion : FATObject

@property (retain, nonatomic) NSString *suggestionText;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
