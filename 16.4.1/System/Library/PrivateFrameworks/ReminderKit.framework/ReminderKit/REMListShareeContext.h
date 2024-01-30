@class REMList, NSArray, REMSharee;

@interface REMListShareeContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) NSArray *sharees;
@property (readonly, nonatomic) REMSharee *sharedOwner;

- (id)initWithList:(id)a0;
- (id)shareesExcludingOwner;
- (void).cxx_destruct;

@end
