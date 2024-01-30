@class NSDictionary;

@interface PKSharingGenericMessage : PKSharingMessage

@property (readonly, nonatomic) NSDictionary *genericSharingDict;
@property (readonly, nonatomic) NSDictionary *appleSharingDict;

+ (BOOL)supportsSecureCoding;
+ (id)_contentForGenericSharingDict:(id)a0 appleSharingDict:(id)a1 format:(unsigned long long)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToSharingGenericMessage:(id)a0;
- (void)addEmbeddedMessages:(id)a0;
- (BOOL)configureWithContent:(id)a0;
- (id)embeddedMessageURLs;
- (id)initWithFormat:(unsigned long long)a0 type:(unsigned long long)a1 genericSharingDict:(id)a2 appleSharingDict:(id)a3;
- (id)initWithFormat:(unsigned long long)a0 type:(unsigned long long)a1 genericSharingDict:(id)a2 appleSharingDict:(id)a3 displayInformation:(id)a4;
- (id)initWithVertical:(unsigned long long)a0 type:(unsigned long long)a1 genericSharingDict:(id)a2 appleSharingDict:(id)a3;

@end
