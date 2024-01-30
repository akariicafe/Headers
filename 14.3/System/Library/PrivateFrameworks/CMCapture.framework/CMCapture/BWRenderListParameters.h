@class NSString;

@interface BWRenderListParameters : NSObject <BWRenderListParameterListProvider> {
    struct BWRenderListParameterList { struct BWRenderListParameterNode *slh_first; } _parameterList;
}

@property (readonly, nonatomic) struct BWRenderListParameterList { struct BWRenderListParameterNode *x0; } *parameterList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
