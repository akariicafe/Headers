@class NSNumber, NSArray;

@interface SAVCSContentCabinet : SAUISnippet

@property (nonatomic) BOOL browseResults;
@property (copy, nonatomic) NSNumber *fullScreenEnabled;
@property (copy, nonatomic) NSArray *shelves;

+ (id)contentCabinet;
+ (id)contentCabinetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
