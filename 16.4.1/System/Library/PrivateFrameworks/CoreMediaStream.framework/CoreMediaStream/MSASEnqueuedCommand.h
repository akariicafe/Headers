@class NSString, NSDictionary;

@interface MSASEnqueuedCommand : NSObject <NSCoding>

@property (copy, nonatomic) NSString *command;
@property (retain, nonatomic) NSDictionary *variantParam;
@property (retain, nonatomic) NSDictionary *invariantParam;

+ (id)command;
+ (id)commandwithCommand:(id)a0 variantParam:(id)a1 invariantParam:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canBeGroupedWithCommand:(id)a0;
- (id)initWithCommand:(id)a0 variantParam:(id)a1 invariantParam:(id)a2;

@end
