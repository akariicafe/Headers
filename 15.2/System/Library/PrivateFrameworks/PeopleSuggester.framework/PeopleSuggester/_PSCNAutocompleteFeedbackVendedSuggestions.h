@class NSArray;

@interface _PSCNAutocompleteFeedbackVendedSuggestions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *suggestions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0;

@end
