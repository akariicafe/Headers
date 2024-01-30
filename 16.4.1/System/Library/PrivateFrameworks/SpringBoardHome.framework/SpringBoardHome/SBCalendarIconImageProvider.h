@class NSString, SBFDateTimeController;
@protocol SBCalendarIconImageProviderDelegate;

@interface SBCalendarIconImageProvider : NSObject <SBFDateTimeOverrideObserver>

@property (class, copy, nonatomic) NSString *significantTimeChangeNotificationName;

@property (weak, nonatomic) id<SBCalendarIconImageProviderDelegate> delegate;
@property (readonly, nonatomic) SBFDateTimeController *dateTimeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (void)localeChanged;
- (void)_stopListeningForSignificantTimeChanges;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)iconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)preparedISIcon;
- (id)initWithDateTimeController:(id)a0;
- (void)dealloc;
- (id)init;
- (void)reloadIconImage;
- (void)_startListeningForSignificantTimeChanges;
- (void).cxx_destruct;

@end
