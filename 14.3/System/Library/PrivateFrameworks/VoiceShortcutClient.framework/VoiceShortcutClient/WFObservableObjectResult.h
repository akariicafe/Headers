@class WFDatabaseObjectDescriptor;

@interface WFObservableObjectResult : WFObservableResult

@property (readonly, nonatomic) WFDatabaseObjectDescriptor *descriptor;
@property (readonly, nonatomic) id value;

+ (void)getResultWithDescriptor:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)description;
- (void)handleChangeNotification:(id)a0;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 initialValue:(id)a2 descriptor:(id)a3;

@end
