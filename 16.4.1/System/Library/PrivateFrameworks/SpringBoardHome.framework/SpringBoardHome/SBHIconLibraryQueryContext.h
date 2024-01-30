@class NSUUID, SBHIconLibraryQuery, NSMutableDictionary;

@interface SBHIconLibraryQueryContext : NSObject {
    NSMutableDictionary *_contextStorage;
    unsigned long long _queryContextIdx;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) SBHIconLibraryQuery *query;

- (id)initWithQuery:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToQueryContext:(id)a0;

@end
