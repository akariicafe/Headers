@class REMList;

@interface REMListSublistContext : NSObject

@property (retain, nonatomic) REMList *list;

- (void).cxx_destruct;
- (id)fetchListsWithError:(id *)a0;
- (id)initWithList:(id)a0;

@end
