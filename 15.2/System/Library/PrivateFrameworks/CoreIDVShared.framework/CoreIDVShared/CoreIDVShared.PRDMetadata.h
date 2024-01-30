@class NSString;

@interface CoreIDVShared.PRDMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ stage1;
    void /* unknown type, empty encoding */ stage2;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
