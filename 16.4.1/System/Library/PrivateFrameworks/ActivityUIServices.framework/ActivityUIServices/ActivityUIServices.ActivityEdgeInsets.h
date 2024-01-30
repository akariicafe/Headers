@class NSString;

@interface ActivityUIServices.ActivityEdgeInsets : NSObject <NSCopying, NSSecureCoding, BSXPCSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ top;
@property (nonatomic) void /* unknown type, empty encoding */ leading;
@property (nonatomic) void /* unknown type, empty encoding */ bottom;
@property (nonatomic) void /* unknown type, empty encoding */ trailing;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithTop:(double)a0 leading:(double)a1 bottom:(double)a2 trailing:(double)a3;

@end
