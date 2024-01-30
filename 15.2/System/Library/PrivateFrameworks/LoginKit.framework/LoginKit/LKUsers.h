@class NSArray, NSString;

@interface LKUsers : NSObject <LKStudentProviding>

@property (copy, nonatomic) NSArray *students;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUsers:(id)a0;

@end
