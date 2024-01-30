@class NSArray, WFWorkflowQuery, WFCoreDataResultState;

@interface WFObservableArrayResult : WFObservableResult

@property (readonly, nonatomic) WFWorkflowQuery *query;
@property (copy, nonatomic) WFCoreDataResultState *resultState;
@property (readonly, nonatomic) NSArray *values;

+ (void)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 initialValues:(id)a2 query:(id)a3 resultState:(id)a4;
- (void)handleChangeNotification:(id)a0;

@end
