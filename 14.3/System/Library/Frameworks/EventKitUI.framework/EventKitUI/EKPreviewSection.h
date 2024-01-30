@class NSArray, NSDate;

@interface EKPreviewSection : NSObject

@property (readonly, nonatomic) NSArray *events;
@property (retain, nonatomic) NSDate *date;

+ (id)sectionWithDate:(id)a0;

- (void)addEvent:(id)a0;
- (id)initWithDate:(id)a0;
- (void).cxx_destruct;

@end
