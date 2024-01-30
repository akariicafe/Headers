@class NSArray, SBIcon, NSString;

@interface _SBIconListRecordedObserverCallback : NSObject <BSDescriptionProviding>

@property (copy, nonatomic) NSArray *addedIcons;
@property (copy, nonatomic) NSArray *removedIcons;
@property (copy, nonatomic) NSArray *movedIcons;
@property (retain, nonatomic) SBIcon *replacedIcon;
@property (retain, nonatomic) SBIcon *replacementIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
