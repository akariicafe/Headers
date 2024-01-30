@class NSMutableArray;

@interface TIContactCollection : NSObject {
    NSMutableArray *_contacts;
}

@property (readonly, nonatomic) BOOL sourceHasRelevancyScore;
@property (readonly, nonatomic) long long count;

- (void)addContact:(id)a0;
- (void).cxx_destruct;
- (id)initWithRelevanceScoreType:(BOOL)a0;
- (void)enumerateContactsUsingBlock:(id /* block */)a0;

@end
