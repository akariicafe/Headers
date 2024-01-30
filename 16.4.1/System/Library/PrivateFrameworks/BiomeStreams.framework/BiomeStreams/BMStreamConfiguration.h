@class NSString, NSArray, BMStreamSyncPolicy, BMStoreConfig;

@interface BMStreamConfiguration : NSObject

@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) Class eventClass;
@property (readonly, nonatomic) BMStoreConfig *storeConfig;
@property (readonly, nonatomic) NSArray *alternativeNames;
@property (readonly, nonatomic) BMStreamSyncPolicy *syncPolicy;

- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2 syncPolicy:(id)a3 alternativeNames:(id)a4;
- (id)init;
- (void).cxx_destruct;

@end
