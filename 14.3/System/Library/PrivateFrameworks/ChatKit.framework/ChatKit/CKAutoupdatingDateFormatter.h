@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter

@property (copy, nonatomic) NSString *template;

- (id)notificationCenter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTemplate:(id)a0;
- (void)updateDateFormat;

@end
