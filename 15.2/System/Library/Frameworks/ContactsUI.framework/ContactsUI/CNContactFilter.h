@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fullTextString;
@property (readonly, nonatomic) BOOL supportsSections;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL rankSortedResults;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
