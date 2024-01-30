@class NSString, NSArray;

@interface EMContentRequestOptions : NSObject <NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *requestedRepresentation;
@property (nonatomic) long long networkUsage;
@property (nonatomic) BOOL includeSuggestionItems;
@property (copy, nonatomic) NSArray *requestedHeaderKeys;
@property (nonatomic) BOOL requestAllHeaders;

+ (id)optionsWithRequestedRepresentationType:(id)a0 networkUsage:(long long)a1;
+ (id)optionsWithRequestedRepresentationType:(id)a0 networkUsage:(long long)a1 includeSuggestionItems:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithBuilder:(id /* block */)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
