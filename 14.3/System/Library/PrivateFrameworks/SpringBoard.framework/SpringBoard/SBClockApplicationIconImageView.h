@class NSString;

@interface SBClockApplicationIconImageView : SBHClockApplicationIconImageView <SBDateTimeOverrideObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;

@end
