@class NSString;

@interface _UIDatePickerCalendarTimeWheelDisplayModeDriver : NSObject <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) id /* block */ invalidationRequestHandler;
@property (nonatomic) unsigned long long displayMode;
@property (readonly, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInvalidationRequestHandler:(id /* block */)a0;

@end
