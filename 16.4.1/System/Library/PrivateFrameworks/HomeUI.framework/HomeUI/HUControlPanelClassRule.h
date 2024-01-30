@class NSString, Protocol;

@interface HUControlPanelClassRule : NSObject <HUControlPanelRule>

@property (copy, nonatomic) Class class;
@property (retain, nonatomic) Protocol *protocol;
@property (nonatomic) double priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleWithControlItemClass:(Class)a0;
+ (id)ruleWithControlItemProtocol:(id)a0;

- (void).cxx_destruct;
- (id)initWithControlItemClass:(Class)a0 protocol:(id)a1;
- (BOOL)ruleMatchesItem:(id)a0;

@end
