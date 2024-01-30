@class NSString;

@interface WFAQIScaleDAQI : NSObject <WFAQIScale>

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scaleCategoryForCategoryIndex:(unsigned long long)a0 localizedCategoryDescription:(id)a1;

@end
