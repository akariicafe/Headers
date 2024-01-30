@class NSString, NSUUID;

@interface CNKNoticeRecipe : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ primaryActionTitle;
    void /* unknown type, empty encoding */ secondaryActionTitle;
    void /* unknown type, empty encoding */ uuid;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ image;
@property (nonatomic, readonly) NSString *primaryActionTitle;
@property (nonatomic, readonly) NSString *secondaryActionTitle;
@property (nonatomic, readonly) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 primaryActionTitle:(id)a3 secondaryActionTitle:(id)a4;

@end
