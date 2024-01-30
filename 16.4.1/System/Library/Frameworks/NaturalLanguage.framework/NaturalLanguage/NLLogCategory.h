@class NSString, NSObject;
@protocol OS_os_log;

@interface NLLogCategory : NSObject

@property (readonly, nonatomic) NSString *loggingSubsystem;
@property (readonly, nonatomic) NSObject<OS_os_log> *internal;
@property (readonly, nonatomic) NSString *loggingCategory;

+ (void)initialize;
+ (id)defaultCategory;
+ (void)_addCategory:(id)a0 inSubsystem:(id)a1;
+ (id)_getCategory:(id)a0;
+ (id)categoryWithName:(id)a0;
+ (id)categoryWithName:(id)a0 inSubsystem:(id)a1;

- (void).cxx_destruct;
- (id)initCategory:(id)a0 inSubsystem:(id)a1;

@end
