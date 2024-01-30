@class NSISO8601DateFormatter;

@interface MDDateFormatter : NSObject {
    NSISO8601DateFormatter *_formatter;
}

- (id)init;
- (void).cxx_destruct;
- (id)iso8601StringPlusPrecisionForDate:(id)a0 isAllDay:(BOOL)a1;

@end
