@class NSString;

@interface Highlights.DeltaProducerOperation : NSOperation {
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ targetDate;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, readonly) NSString *description;

- (void)main;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
