@class NSArray, NSString;

@interface VCSleepWorkflow : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *summaryString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActions:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
