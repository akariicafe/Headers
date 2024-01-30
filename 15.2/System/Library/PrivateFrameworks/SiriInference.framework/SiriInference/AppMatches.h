@class NSArray, NSString;

@interface AppMatches : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ bundleIds;
    void /* unknown type, empty encoding */ signals;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ recommendation;
@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
