@class NSString, NSArray;

@interface ASDGatherLogsRequestOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) BOOL verbose;
@property (copy, nonatomic) NSArray *urlFilters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
