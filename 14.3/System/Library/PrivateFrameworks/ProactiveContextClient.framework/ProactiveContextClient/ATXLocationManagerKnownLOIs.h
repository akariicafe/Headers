@class CLLocation;

@interface ATXLocationManagerKnownLOIs : NSObject <NSSecureCoding> {
    CLLocation *Home;
    CLLocation *Work;
    CLLocation *School;
    CLLocation *Gym;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
