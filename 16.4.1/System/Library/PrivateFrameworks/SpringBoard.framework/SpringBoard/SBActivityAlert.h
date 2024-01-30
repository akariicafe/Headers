@class NSString, ACUISActivityAlertOptions, SBActivityItem;

@interface SBActivityAlert : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) SBActivityItem *item;
@property (readonly, copy, nonatomic) NSString *payloadIdentifier;
@property (readonly, nonatomic) ACUISActivityAlertOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 payloadIdentifier:(id)a1 options:(id)a2;

@end
