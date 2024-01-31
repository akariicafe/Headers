@class NSArray;

@interface CNDuplicateContactsManager : NSObject {
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ contacts;
    void /* unknown type, empty encoding */ findResult;
    void /* unknown type, empty encoding */ mergeResult;
    void /* unknown type, empty encoding */ didPerformMerge;
}

@property (nonatomic, readonly) NSArray *duplicates;

+ (void)updateRecentPostersDatabaseForSignatures:(id)a0;
+ (void)duplicatesCountsWithCompletionHandler:(void (^)(long long, long long))a0;
+ (void)updateRecentImagesDatabaseForSignatures:(id)a0;
+ (BOOL)applyMergeResultToSaveRequest:(id)a0 signatures:(id)a1;
+ (void)refreshManagedDuplicatesWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyMergeResultToSaveRequest:(id)a0;

@end
