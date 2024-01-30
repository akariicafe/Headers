@class NSString;

@interface DIOneshotTimer : NSObject {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ timeInterval;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ deadline;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (void)cancelTimer;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 queue:(id)a1 identifier:(id)a2 label:(id)a3 handler:(id /* block */)a4;

@end
