@class NSArray;

@interface FAInviteCompletionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long transportType;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) unsigned long long status;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_completionStatusStringValue;
- (id)_transportStringValue;
- (unsigned long long)completionTypeFrom:(id)a0;
- (id)serverReadableDictionary;
- (unsigned long long)transportTypeFrom:(id)a0;

@end
