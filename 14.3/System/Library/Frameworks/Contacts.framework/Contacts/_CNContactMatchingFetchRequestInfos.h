@class NSPredicate, NSArray;

@interface _CNContactMatchingFetchRequestInfos : NSObject

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *properties;

+ (id)fetchRequestInfoForPredicate:(id)a0 properties:(id)a1;

- (void).cxx_destruct;

@end
