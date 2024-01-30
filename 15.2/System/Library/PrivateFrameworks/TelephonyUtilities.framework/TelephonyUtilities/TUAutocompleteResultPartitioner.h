@class TUSearchController, NSMutableArray;

@interface TUAutocompleteResultPartitioner : NSObject

@property (retain, nonatomic) NSMutableArray *normalResultsArray;
@property (retain, nonatomic) NSMutableArray *foundInMailResultsArray;
@property (retain, nonatomic) NSMutableArray *foundOnServersResultsArray;
@property (weak) TUSearchController *searchController;

+ (BOOL)sourceTypeIsFoundInMail:(unsigned long long)a0;
+ (BOOL)sourceTypeIsFoundOnServers:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)searchResults;
- (void)addResult:(id)a0;

@end
