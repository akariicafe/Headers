@class NSString;

@interface SCNNodeReference : SCNReferenceNode

@property (copy, nonatomic) NSString *referenceSceneName;
@property (copy, nonatomic) NSString *referenceNodeName;

- (void)dealloc;
- (void)_reloadWithScene:(id)a0;

@end
