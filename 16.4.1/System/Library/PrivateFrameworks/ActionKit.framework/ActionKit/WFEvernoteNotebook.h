@class NSString;

@interface WFEvernoteNotebook : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *name;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGUID:(id)a0 name:(id)a1;
- (id)initWithNotebook:(id)a0;

@end
