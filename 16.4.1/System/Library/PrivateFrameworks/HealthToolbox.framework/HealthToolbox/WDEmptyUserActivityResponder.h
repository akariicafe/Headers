@class NSString;

@interface WDEmptyUserActivityResponder : NSObject <WDUserActivityResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyUserActivityResponder;

- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;

@end
