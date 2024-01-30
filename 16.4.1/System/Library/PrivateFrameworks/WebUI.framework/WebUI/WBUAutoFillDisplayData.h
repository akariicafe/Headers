@class NSString, NSArray;

@interface WBUAutoFillDisplayData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSArray *fillMatches;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)addressStringForLabel:(id)a0;
- (id)initWithLabel:(id)a0 fillMatches:(id)a1;

@end
