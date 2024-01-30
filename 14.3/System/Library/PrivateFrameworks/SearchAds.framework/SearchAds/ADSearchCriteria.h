@class NSString;

@interface ADSearchCriteria : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageLocale;
@property (copy, nonatomic) NSString *searchTerm;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
