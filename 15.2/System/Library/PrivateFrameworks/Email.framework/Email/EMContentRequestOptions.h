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

- (void)encodeWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)copyWithBuilder:(id /* block */)a0;

@end
