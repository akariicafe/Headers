@class NSString;

@interface _UNNotificationContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) long long handleType;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested;
@property (readonly, copy, nonatomic) NSString *customIdentifier;
@property (readonly, copy, nonatomic) NSString *cnContactIdentifier;
@property (readonly, copy, nonatomic) NSString *cnContactFullname;
@property (readonly, nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested;
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (readonly, nonatomic, getter=isPreferredNameReal) BOOL preferredNameReal;

+ (id)contactFromINPerson:(id)a0 serviceName:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (BOOL)isSimilar:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithhandle:(id)a0 handleType:(long long)a1 serviceName:(id)a2 displayName:(id)a3 displayNameSuggested:(BOOL)a4 customIdentifier:(id)a5 cnContactIdentifier:(id)a6 cnContactFullname:(id)a7 cnContactIdentifierSuggested:(BOOL)a8;
- (unsigned long long)similarHash;

@end
