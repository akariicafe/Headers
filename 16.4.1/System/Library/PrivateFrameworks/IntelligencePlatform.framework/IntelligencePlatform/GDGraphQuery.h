@class NSString, NSArray;

@interface GDGraphQuery : NSObject

@property (retain, nonatomic) NSString *objectFTSTerm;
@property (retain, nonatomic) NSArray *subjects;
@property (retain, nonatomic) NSArray *predicates;
@property (retain, nonatomic) NSArray *objects;

- (void).cxx_destruct;

@end
