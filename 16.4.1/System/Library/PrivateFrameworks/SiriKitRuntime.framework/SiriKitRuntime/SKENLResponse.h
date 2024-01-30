@class NSString;

@interface SKENLResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ nlParses;
    void /* unknown type, empty encoding */ nlResponseStatusCode;
    void /* unknown type, empty encoding */ pommesResponse;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
