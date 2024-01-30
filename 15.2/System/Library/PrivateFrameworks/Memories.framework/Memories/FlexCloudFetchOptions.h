@class NSPredicate, NSArray;

@interface FlexCloudFetchOptions : NSObject

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) BOOL localOnly;

- (void).cxx_destruct;

@end
