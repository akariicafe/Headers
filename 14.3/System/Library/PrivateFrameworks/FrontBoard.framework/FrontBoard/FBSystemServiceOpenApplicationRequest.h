@class NSString, FBProcess, FBSOpenApplicationOptions;

@interface FBSystemServiceOpenApplicationRequest : NSObject

@property (nonatomic, getter=isTrusted) BOOL trusted;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) FBSOpenApplicationOptions *options;
@property (retain, nonatomic) FBProcess *clientProcess;

+ (id)request;

- (void).cxx_destruct;
- (id)description;

@end
