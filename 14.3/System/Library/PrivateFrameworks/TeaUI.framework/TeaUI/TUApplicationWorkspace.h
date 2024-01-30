@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject

@property (readonly, nonatomic) LSApplicationWorkspace *applicationWorkspace;

+ (id)shared;

- (void).cxx_destruct;
- (void)openSensitiveURL:(id)a0 options:(id)a1;
- (id)initWithApplicationWorkspace:(id)a0;

@end
