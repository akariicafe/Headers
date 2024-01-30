@class NSISO8601DateFormatter;

@interface AVInternetDateFormatter : NSObject {
    NSISO8601DateFormatter *_dateFormatter;
}

+ (id)internetDateFormatter;

- (id)stringFromDate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dateFromString:(id)a0;

@end
