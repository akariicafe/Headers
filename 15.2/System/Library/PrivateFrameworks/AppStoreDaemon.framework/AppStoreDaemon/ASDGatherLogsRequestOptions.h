@class NSString, NSArray;

@interface ASDGatherLogsRequestOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) BOOL verbose;
@property (copy, nonatomic) NSArray *urlFilters;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
