@class NSString, NSArray;

@interface WFSynonymString : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *synonyms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 synonyms:(id)a1;

@end
