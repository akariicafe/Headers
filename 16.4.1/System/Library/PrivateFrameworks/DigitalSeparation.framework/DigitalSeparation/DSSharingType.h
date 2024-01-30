@class NSString, NSArray, NSMutableOrderedSet;
@protocol DSSource;

@interface DSSharingType : NSObject

@property (retain, nonatomic) id<DSSource> source;
@property (retain, nonatomic) NSMutableOrderedSet *people;
@property (readonly, nonatomic) long long score;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *localizedDetailText;
@property (readonly, copy, nonatomic) NSArray *sortedPeople;
@property (readonly, copy, nonatomic) NSArray *allPeople;

+ (void)initialize;

- (id)initWithSource:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)removePerson:(id)a0;
- (void)addPerson:(id)a0;
- (void)stopAllSharingOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)stopSharingPeople:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
