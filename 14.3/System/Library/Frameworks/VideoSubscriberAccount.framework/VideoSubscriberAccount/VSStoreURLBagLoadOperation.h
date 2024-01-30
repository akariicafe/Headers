@class NSError, NSString, VSStoreURLBag;

@interface VSStoreURLBagLoadOperation : VSAsyncOperation

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSStoreURLBag *bag;
@property (copy, nonatomic) NSString *bagKey;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
