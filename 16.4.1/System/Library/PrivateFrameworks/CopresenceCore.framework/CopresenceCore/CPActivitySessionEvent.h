@interface CPActivitySessionEvent : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ originatorID;
    void /* unknown type, empty encoding */ queueItemType;
    void /* unknown type, empty encoding */ url;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
