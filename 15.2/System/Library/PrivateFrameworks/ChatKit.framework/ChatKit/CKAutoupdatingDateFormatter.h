@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter

@property (copy, nonatomic) NSString *template;

- (id)notificationCenter;
- (void)updateDateFormat;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTemplate:(id)a0;

@end
