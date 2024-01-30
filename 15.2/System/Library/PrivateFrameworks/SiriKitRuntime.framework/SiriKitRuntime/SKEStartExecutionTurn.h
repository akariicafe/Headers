@class NSString;

@interface SKEStartExecutionTurn : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ isTapToEdit;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
