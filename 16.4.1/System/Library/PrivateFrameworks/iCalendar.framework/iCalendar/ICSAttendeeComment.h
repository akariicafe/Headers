@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty

@property (retain, nonatomic) NSString *x_calendarserver_attendee_ref;
@property (retain, nonatomic) ICSDateValue *x_calendarserver_dtstamp;

- (void)setComment:(id)a0;
- (id)initWithComment:(id)a0;
- (id)parametersToObscure;
- (BOOL)shouldObscureValue;

@end
