@class NSString;

@interface HUQuickControlGridItemPredicate : NSObject <HUQuickControlItemPredicate>

@property (readonly, nonatomic) unsigned long long maximumNumberOfMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)matchingControlItemsForControlItems:(id)a0;

@end
