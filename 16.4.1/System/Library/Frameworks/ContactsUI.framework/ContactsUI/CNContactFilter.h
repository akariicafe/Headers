@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fullTextString;
@property (readonly, nonatomic) BOOL supportsSections;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL rankSortedResults;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
