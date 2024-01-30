@class REMList;

@interface REMListSublistContext : NSObject

@property (retain, nonatomic) REMList *list;

- (id)fetchListsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)fetchCustomSmartListsWithError:(id *)a0;
- (id)initWithList:(id)a0;

@end
