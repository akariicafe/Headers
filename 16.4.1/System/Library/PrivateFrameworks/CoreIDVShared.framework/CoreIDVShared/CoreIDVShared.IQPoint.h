@class NSString;

@interface CoreIDVShared.IQPoint : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ x;
    void /* unknown type, empty encoding */ y;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
