@class NSString, CRKCourse;

@interface CRKExpiredCourseAlertText : NSObject

@property (readonly, nonatomic) CRKCourse *course;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *acknowledgeOptionTitle;
@property (readonly, nonatomic) NSString *message;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCourse:(id)a0;

@end
