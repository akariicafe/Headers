@class NSArray;

@interface AVTPuppetStore : NSObject

@property (copy, nonatomic) NSArray *puppetRecords;

+ (id)createPuppetRecords;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)avatarsWithIdentifiers:(id)a0 error:(id *)a1;
- (void)loadPuppetRecordsIfNeeded;
- (id)allAvatarPuppetsWithError:(id *)a0;
- (id)allAvatarPuppetsExcluding:(id)a0 error:(id *)a1;
- (id)allPuppetRecords;
- (id)avatarPuppetsForFetchRequest:(id)a0 error:(id *)a1;

@end
