@class NSNumber, NSMutableSet;
@protocol CLKUIResourceProviderDelegate;

@interface CLKUIResourceProvider : NSObject

@property (readonly, weak, nonatomic) id<CLKUIResourceProviderDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *uuidHistory;
@property (readonly, nonatomic) NSNumber *key;

- (void).cxx_destruct;
- (void)addUuidToHistory:(id)a0;
- (id)initWithDelegate:(id)a0 key:(id)a1;

@end
