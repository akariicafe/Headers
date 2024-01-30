@class NSISO8601DateFormatter;

@interface AVInternetDateFormatter : NSObject {
    NSISO8601DateFormatter *_dateFormatter;
}

+ (id)internetDateFormatter;

- (id)dateFromString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stringFromDate:(id)a0;

@end
