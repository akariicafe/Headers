@class WFResultQuery, NSArray, WFCoreDataResultState;

@interface WFObservableArrayResult : WFObservableResult

@property (readonly, nonatomic) WFResultQuery *query;
@property (copy, nonatomic) WFCoreDataResultState *resultState;
@property (readonly, nonatomic) NSArray *values;

+ (void)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
+ (id)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (id)getEmptyResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2;

- (void)handleChangeNotification:(id)a0;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 initialValues:(id)a2 query:(id)a3 resultState:(id)a4;
- (id)description;
- (void).cxx_destruct;

@end
