@class NSString, NSURL;

@interface SBSRelaunchAction : BSAction

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, retain, nonatomic) NSURL *targetURL;

+ (id)actionWithReason:(id)a0 options:(unsigned long long)a1 targetURL:(id)a2;

- (id)initWithReason:(id)a0 options:(unsigned long long)a1 targetURL:(id)a2;

@end
