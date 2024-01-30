@class NSString, BPSBiomeStorePublisher;

@interface BMStoreValidator : NSObject {
    NSString *_identifier;
    BPSBiomeStorePublisher *_publisher;
}

+ (id)new;

- (id)init;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1;
- (void).cxx_destruct;
- (int)isChronologicallyValidFromBookmark:(id)a0 shouldContinue:(id /* block */)a1;
- (int)isChronologicallyValidFromTimestamp:(double)a0;
- (int)isChronologicallyValidFromTimestamp:(double)a0 shouldContinue:(id /* block */)a1;
- (int)isChronologicallyValidWithPublisher:(id)a0 shouldContinue:(id /* block */)a1;

@end
