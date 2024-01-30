@class NSString, NSObject;
@protocol OS_os_log;

@interface HMFLogCategory : NSObject

@property (readonly, nonatomic) NSString *loggingSubsystem;
@property (readonly, nonatomic) NSObject<OS_os_log> *internal;
@property (readonly, nonatomic) NSString *loggingCategory;

+ (void)initialize;
+ (id)categoryWithName:(id)a0;
+ (id)defaultCategory;
+ (id)categoryWithName:(id)a0 inSubsystem:(id)a1;

- (void).cxx_destruct;
- (id)initCategory:(id)a0 inSubsystem:(id)a1;

@end
