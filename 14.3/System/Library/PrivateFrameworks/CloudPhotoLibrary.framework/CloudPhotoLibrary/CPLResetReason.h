@class NSString, NSDate;

@interface CPLResetReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id asPlist;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL tentative;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 reason:(id)a1;
- (id)reasonDescriptionWithNow:(id)a0;

@end
