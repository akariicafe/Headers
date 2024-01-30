@class NSString;

@interface VUIDevice : NSObject

@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) NSString *model;
@property (class, readonly, nonatomic) NSString *systemName;
@property (class, readonly, nonatomic) NSString *systemVersion;
@property (class, readonly, nonatomic) NSString *guid;
@property (class, readonly, nonatomic) long long userInterfaceIdiom;
@property (class, readonly, nonatomic) BOOL isPhone;
@property (class, readonly, nonatomic) BOOL isPad;
@property (class, readonly, nonatomic) BOOL isTV;
@property (class, readonly, nonatomic) BOOL isMac;

+ (BOOL)supportsDeepColor;
+ (void)enablePortraitLock:(BOOL)a0;

@end
