@class NSURL, NSString;

@interface TPSURLActionComponents : NSObject

@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *identifier;

+ (unsigned long long)_actionTypeForString:(id)a0;
+ (id)componentsWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)_parseURL:(id)a0;

@end
