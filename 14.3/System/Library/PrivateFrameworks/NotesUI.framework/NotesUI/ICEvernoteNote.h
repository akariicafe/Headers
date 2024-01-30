@class NSString, NSArray, NSDate;

@interface ICEvernoteNote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *updated;
@property (retain, nonatomic) NSArray *resources;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
