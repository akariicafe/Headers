@class NSString, NSObject;
@protocol OS_os_log;

@interface CARPFLogCategory : NSObject

@property (readonly, nonatomic) NSString *loggingSubsystem;
@property (readonly, nonatomic) NSObject<OS_os_log> *internal;
@property (readonly, nonatomic) NSString *loggingCategory;

+ (void)initialize;
+ (id)defaultCategory;
+ (id)categoryWithName:(id)a0 inSubsystem:(id)a1;
+ (id)categoryWithName:(id)a0;

- (void).cxx_destruct;
- (id)initCategory:(id)a0 inSubsystem:(id)a1;

@end
