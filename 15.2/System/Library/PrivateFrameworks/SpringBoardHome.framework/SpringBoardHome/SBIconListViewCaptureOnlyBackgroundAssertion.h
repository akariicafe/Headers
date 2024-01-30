@class NSString, SBIcon;

@interface SBIconListViewCaptureOnlyBackgroundAssertion : NSObject <BSInvalidatable> {
    id /* block */ _invalidationBlock;
}

@property (readonly, weak, nonatomic) SBIcon *icon;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIcon:(id)a0 groupName:(id)a1 invalidation:(id /* block */)a2;

@end
