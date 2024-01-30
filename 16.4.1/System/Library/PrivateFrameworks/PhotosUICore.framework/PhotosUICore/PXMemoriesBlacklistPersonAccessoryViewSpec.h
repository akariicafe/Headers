@protocol PXPerson;

@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec

@property (readonly, nonatomic) id<PXPerson> person;

+ (id)specWithPerson:(id)a0;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;

@end
