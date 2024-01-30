@interface PXSectionedDataSourceWaitingCondition : NSObject

@property (copy, nonatomic) id /* block */ condition;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
