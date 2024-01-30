@class NSArray;

@interface MIDataProtectionChangeOperation : NSObject

@property (readonly, nonatomic) NSArray *urls;
@property (readonly, nonatomic) int newClass;
@property (readonly, nonatomic) unsigned long long operationType;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)dataProtectionChangeOperationForURL:(id)a0 settingClass:(int)a1 changeType:(unsigned long long)a2;
+ (id)dataProtectionChangeOperationForURLs:(id)a0 settingClass:(int)a1 changeType:(unsigned long long)a2;

- (void).cxx_destruct;
- (BOOL)_runChangeOperationWasLocked:(BOOL *)a0 withError:(id *)a1;
- (id)initWithURLs:(id)a0 newClass:(int)a1 changeType:(unsigned long long)a2;
- (void)performChangeOperation;

@end
