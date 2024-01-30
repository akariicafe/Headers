@class _DKEvent, NSDate;

@interface _DKEventDateRef : NSObject {
    NSDate *_date;
    unsigned long long _type;
    _DKEvent *_event;
}

- (void).cxx_destruct;

@end
