@protocol PKSubscriptionController;

@interface PodcastsKit.CoreDataLibrary : NSObject <PKLibrary> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_subscriptionController;
}

@property (nonatomic, retain) id<PKSubscriptionController> subscriptionController;

- (id)init;
- (void).cxx_destruct;
- (void)fetchMatchesFor:(id)a0 limit:(long long)a1 resultsHandler:(id /* block */)a2;

@end
