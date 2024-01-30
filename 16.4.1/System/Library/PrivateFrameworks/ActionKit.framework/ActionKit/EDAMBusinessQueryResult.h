@class NSNumber, NSDictionary, NSArray;

@interface EDAMBusinessQueryResult : FATObject

@property (retain, nonatomic) NSNumber *totalNotebooks;
@property (retain, nonatomic) NSDictionary *totalNotesByNotebook;
@property (retain, nonatomic) NSArray *experts;
@property (retain, nonatomic) NSArray *matchingNotebooks;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
