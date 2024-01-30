@class NSPredicate, NSArray;

@interface FMFetchOptions : NSObject

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (id)init;

@end
