@class NSString;

@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer

@property (copy, nonatomic) NSString *identifierKeyPath;
@property (copy, nonatomic) NSString *sortIndexKeyPath;
@property (copy, nonatomic) id /* block */ groupsSortComparator;
@property (nonatomic) BOOL performDefaultSort;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifierKeyPath:(id)a0;

@end
