@class DUCalendarEventObjC, NSString, NSDictionary, DUDebugInfoObjC, _TtC21DocumentUnderstanding18DUStructuredEntity;

@interface DUStructuredEntityObjC : NSObject {
    _TtC21DocumentUnderstanding18DUStructuredEntity *_underlying;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *phoneNumberLabel;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *addressComponents;
@property (copy, nonatomic) DUCalendarEventObjC *calendarEvent;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;

- (id)init;
- (void).cxx_destruct;

@end
