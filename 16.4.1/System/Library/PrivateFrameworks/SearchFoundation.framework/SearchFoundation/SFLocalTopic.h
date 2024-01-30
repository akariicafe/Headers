@class NSString, SFSearchResult;

@interface SFLocalTopic : SFTopic <SFLocalTopic>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SFSearchResult *result;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResult:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)normalizedTopic;
- (id)initWithResult:(id)a0 identifier:(id)a1;

@end
