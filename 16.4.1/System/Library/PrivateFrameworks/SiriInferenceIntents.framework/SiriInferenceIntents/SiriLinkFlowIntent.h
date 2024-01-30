@class NSString;

@interface SiriLinkFlowIntent : INIntent

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *actionIdentifier;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
