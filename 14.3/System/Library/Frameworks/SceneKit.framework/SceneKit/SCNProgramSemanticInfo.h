@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *semantic;
@property (retain, nonatomic) NSDictionary *options;

+ (id)infoWithSemantic:(id)a0 options:(id)a1;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
