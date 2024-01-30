@class NSString;

@interface SHMediaLibraryQueryParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) long long resultsLimit;
@property (readonly, nonatomic) unsigned long long filterOptions;
@property (readonly, nonatomic) BOOL ascending;

+ (id)defaultParameters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)commonInitWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2 providerIdentifier:(id)a3;
- (id)initWithResultsLimit:(long long)a0;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2 providerIdentifier:(id)a3;
- (BOOL)validateLimit:(long long)a0;

@end
