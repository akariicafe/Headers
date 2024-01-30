@class NSString, NSDate;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long selectionType;
@property (retain, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
