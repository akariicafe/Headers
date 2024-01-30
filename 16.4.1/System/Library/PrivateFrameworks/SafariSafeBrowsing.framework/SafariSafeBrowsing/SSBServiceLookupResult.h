@class NSString, NSURL;

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding> {
    struct LookupResult { struct OptionSet<Backend::LookupResult::Type> { unsigned int m_storage; } type; int provider; } _lookupResult;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;
@property (readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;
@property (readonly, nonatomic) NSString *malwareDetailsBaseURLString;
@property (readonly, nonatomic) NSURL *learnMoreURL;
@property (readonly, nonatomic) NSString *reportAnErrorBaseURLString;
@property (readonly, nonatomic) NSString *localizedProviderDisplayName;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLookupResult:(struct LookupResult { struct OptionSet<Backend::LookupResult::Type> { unsigned int x0; } x0; int x1; })a0;

@end
