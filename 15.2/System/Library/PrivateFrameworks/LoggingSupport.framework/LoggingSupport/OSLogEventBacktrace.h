@class NSArray;

@interface OSLogEventBacktrace : NSObject

@property (readonly, nonatomic) NSArray *frames;

- (id)initWithSingleFrame:(id)a0;
- (id)initWithFrames:(id)a0;
- (id)initWithBacktrace:(struct os_log_backtrace_s { struct os_log_backtrace_frame_s *x0; int x1; } *)a0;
- (void)dealloc;

@end
