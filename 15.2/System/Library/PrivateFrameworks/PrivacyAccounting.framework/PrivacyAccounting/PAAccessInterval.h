@class NSNumber, PAAccessLogger;

@interface PAAccessInterval : NSObject {
    PAAccessLogger *_logger;
    struct atomic_flag { _Atomic BOOL _Value; } _wasEnded;
}

@property (readonly, nonatomic) NSNumber *slot;

+ (id)placeholderAccessInterval;

- (void)end;
- (id)initWithLogger:(id)a0 slot:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)endWithTimestampAdjustment:(double)a0;
- (void)dealloc;

@end
