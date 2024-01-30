@class NSString, NSDate;

@interface AFHomeAccessorySiriDataSharingChangeLogEvent : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long previousOptInStatus;
@property (readonly, nonatomic) long long newOptInStatus;
@property (readonly, nonatomic) long long changeSource;
@property (readonly, copy, nonatomic) NSString *changeReason;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *schemaVersion;
@property (readonly, copy, nonatomic) NSString *logEventIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithDate:(id)a0 previousOptInStatus:(long long)a1 newOptInStatus:(long long)a2 changeSource:(long long)a3 changeReason:(id)a4 buildVersion:(id)a5 productVersion:(id)a6 schemaVersion:(id)a7 logEventIdentifier:(id)a8;

@end
