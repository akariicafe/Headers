@class NSString;

@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule>

@property (copy, nonatomic) id /* block */ filter;
@property (nonatomic) double priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleWithFilter:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithFilter:(id /* block */)a0;
- (BOOL)ruleMatchesItem:(id)a0;

@end
