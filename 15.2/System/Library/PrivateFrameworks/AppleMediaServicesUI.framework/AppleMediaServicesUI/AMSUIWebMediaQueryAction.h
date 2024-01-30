@class NSArray, NSNumber;

@interface AMSUIWebMediaQueryAction : AMSUIWebAction

@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSNumber *observing;
@property (retain, nonatomic) NSArray *storeItemIDs;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
