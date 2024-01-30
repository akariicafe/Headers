@class NSTimeZone, CLKUIAlmanacTransitInfo, NSString, NSDate;

@interface NTKWorldClockGraphicCircularViewConfiguration : NSObject

@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) CLKUIAlmanacTransitInfo *transitInfo;
@property (readonly, nonatomic) NSString *labelText;
@property (readonly, nonatomic) NSDate *overrideDate;
@property (readonly, nonatomic) BOOL inTritium;

- (void).cxx_destruct;
- (id)initWithTimeZone:(id)a0 labelText:(id)a1 transitInfo:(id)a2 inTritium:(BOOL)a3 overrideDate:(id)a4;

@end
