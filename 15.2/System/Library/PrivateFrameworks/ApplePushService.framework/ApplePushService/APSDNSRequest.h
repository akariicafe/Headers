@class NSString, NSDate;

@interface APSDNSRequest : NSObject <NSSecureCoding> {
    long long _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly, nonatomic) double timeout;
@property (readonly, copy) id /* block */ responseBlock;
@property (retain, nonatomic) NSString *environment;
@property (retain, nonatomic) NSDate *requestStartTime;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHostname:(id)a0 timeoutInSeconds:(double)a1 requestFlags:(long long)a2 responseBlock:(id /* block */)a3;

@end
