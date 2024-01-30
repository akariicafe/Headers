@class NSString, WFContentAttributionTracker, WFParameter;
@protocol WFVariableDataSource;

@interface WFParameterStateProcessingContext : NSObject

@property (readonly, nonatomic) id<WFVariableDataSource> variableSource;
@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) BOOL isInputParameter;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) WFContentAttributionTracker *contentAttributionTracker;
@property (readonly, nonatomic) NSString *widgetSizeClass;
@property (readonly, nonatomic) long long maximumItemCount;

- (void).cxx_destruct;
- (id)initWithVariableSource:(id)a0 parameter:(id)a1 isInputParameter:(BOOL)a2 environment:(long long)a3 contentAttributionTracker:(id)a4 widgetSizeClass:(id)a5;
- (void)addContentAttributionSet:(id)a0;

@end
