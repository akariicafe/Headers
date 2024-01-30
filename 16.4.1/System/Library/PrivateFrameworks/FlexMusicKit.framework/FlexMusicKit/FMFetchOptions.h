@class NSPredicate, NSArray;

@interface FMFetchOptions : NSObject

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;

- (id)init;
- (void).cxx_destruct;

@end
