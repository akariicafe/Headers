@class NSString, NSError, HKProfileIdentifier, NSDate;

@interface HDDatabaseCorruptionEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly) long long component;
@property (readonly, copy, nonatomic) NSString *buildDescription;
@property (readonly, copy, nonatomic) NSString *failedObliterationReason;

+ (id)createForProfile:(id)a0 component:(long long)a1 error:(id)a2 failedObliterationReason:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 date:(id)a1 profileIdentifier:(id)a2 component:(long long)a3 build:(id)a4 failedObliterationReason:(id)a5;

@end
