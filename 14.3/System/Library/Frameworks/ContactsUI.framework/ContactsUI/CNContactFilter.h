@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fullTextString;
@property (readonly, nonatomic) BOOL supportsSections;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL rankSortedResults;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
