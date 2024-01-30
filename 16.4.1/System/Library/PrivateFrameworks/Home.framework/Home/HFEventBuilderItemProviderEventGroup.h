@class NSString, NSSet;

@interface HFEventBuilderItemProviderEventGroup : NSObject

@property (retain, nonatomic) NSString *comparisonKey;
@property (retain, nonatomic) NSSet *eventBuilders;

+ (id)eventGroupWithBuilders:(id)a0;

- (void).cxx_destruct;
- (id)initWithEventBuilders:(id)a0;

@end
