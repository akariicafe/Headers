@protocol VSJSItemGroupBridge;

@interface VSJSItemGroup : IKJSObject <VSJSItemGroup>

@property (retain, nonatomic) id<VSJSItemGroupBridge> bridge;
@property (nonatomic) long long selectedItem;

- (void).cxx_destruct;

@end
