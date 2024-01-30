@class NSString;

@interface ADSearchCriteria : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageLocale;
@property (copy, nonatomic) NSString *searchTerm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
