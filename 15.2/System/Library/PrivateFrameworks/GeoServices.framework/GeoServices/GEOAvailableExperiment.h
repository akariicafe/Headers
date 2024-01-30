@class NSString, NSMutableArray;

@interface GEOAvailableExperiment : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableArray *branches;

- (id)_branchForLabel:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (void)_addBranch:(id)a0;

@end
