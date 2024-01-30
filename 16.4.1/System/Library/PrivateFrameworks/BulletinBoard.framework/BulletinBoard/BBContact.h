@class NSString;

@interface BBContact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *customHandle;
@property (readonly, nonatomic) long long customHandleType;
@property (readonly, copy, nonatomic) NSString *customDisplayName;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) long long handleType;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested;
@property (readonly, copy, nonatomic) NSString *customIdentifier;
@property (readonly, copy, nonatomic) NSString *cnContactIdentifier;
@property (readonly, copy, nonatomic) NSString *cnContactFullname;
@property (readonly, nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested;

+ (id)contactWithCustomHandle:(id)a0 customHandleType:(long long)a1 serviceName:(id)a2 customDisplayName:(id)a3 cnContactIdentifier:(id)a4 cnContactFullname:(id)a5 cnContactIdentifierSuggested:(BOOL)a6;
+ (id)contactWithHandle:(id)a0 handleType:(long long)a1 serviceName:(id)a2 displayName:(id)a3 cnContactIdentifier:(id)a4 cnContactFullname:(id)a5 cnContactIdentifierSuggested:(BOOL)a6;
+ (id)contactWithHandle:(id)a0 handleType:(long long)a1 serviceName:(id)a2 displayName:(id)a3 customIdentifier:(id)a4 cnContactIdentifier:(id)a5 cnContactFullname:(id)a6 cnContactIdentifierSuggested:(BOOL)a7;
+ (id)contactWithHandle:(id)a0 handleType:(long long)a1 serviceName:(id)a2 displayName:(id)a3 displayNameSuggested:(BOOL)a4 customIdentifier:(id)a5 cnContactIdentifier:(id)a6 cnContactFullname:(id)a7 cnContactIdentifierSuggested:(BOOL)a8;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithHandle:(id)a0 handleType:(long long)a1 serviceName:(id)a2 displayName:(id)a3 displayNameSuggested:(BOOL)a4 customIdentifier:(id)a5 cnContactIdentifier:(id)a6 cnContactFullname:(id)a7 cnContactIdentifierSuggested:(BOOL)a8;

@end
