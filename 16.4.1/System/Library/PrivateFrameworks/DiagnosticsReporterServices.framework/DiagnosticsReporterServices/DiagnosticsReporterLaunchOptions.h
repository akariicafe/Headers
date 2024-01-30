@class NSArray, NSString;

@interface DiagnosticsReporterLaunchOptions : NSObject

@property (copy, nonatomic) NSArray *files_to_attach;
@property (copy, nonatomic) NSString *log_path;
@property (copy, nonatomic) NSString *panic_string;

- (void).cxx_destruct;

@end
