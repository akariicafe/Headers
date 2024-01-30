@class NSString, NSArray, NSDate;

@interface ICEvernoteNote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSDate *updated;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *resources;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
