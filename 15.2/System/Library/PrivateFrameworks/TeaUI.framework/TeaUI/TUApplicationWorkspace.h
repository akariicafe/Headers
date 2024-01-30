@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject

@property (readonly, nonatomic) LSApplicationWorkspace *applicationWorkspace;

+ (id)shared;

- (id)initWithApplicationWorkspace:(id)a0;
- (void).cxx_destruct;
- (void)openSensitiveURL:(id)a0 options:(id)a1;

@end
