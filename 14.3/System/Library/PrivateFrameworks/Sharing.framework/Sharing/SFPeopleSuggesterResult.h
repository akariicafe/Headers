@class NSString, NSArray;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contactID;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *sendersKnownAlias;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
