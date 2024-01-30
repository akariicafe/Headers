@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *sectionsInfo;
@property (readonly, nonatomic) NSDictionary *sortingDetails;
@property (readonly, nonatomic) NSString *canonicalLanguageIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSectionsInfo:(id)a0 sortingDetails:(id)a1 canonicalLanguageIdentifier:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
