@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter

@property (copy, nonatomic) NSString *template;

- (id)notificationCenter;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTemplate:(id)a0;
- (void)updateDateFormat;

@end
