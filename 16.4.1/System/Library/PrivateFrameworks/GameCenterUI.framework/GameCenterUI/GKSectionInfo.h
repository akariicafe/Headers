@class NSPredicate, NSArray, NSString;

@interface GKSectionInfo : NSObject

@property (nonatomic) long long section;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;

- (id)description;
- (void).cxx_destruct;

@end
