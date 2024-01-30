@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate>

@property (copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) unsigned long long maximumNumberOfMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateWithControlItemClass:(Class)a0;

@end
