@class NSString, NSArray;

@interface _PSSuggestionProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *interactionRecipients;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, copy, nonatomic) NSArray *handles;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *reasonType;
@property (readonly, nonatomic) BOOL useGroupsWhenFindingRecipient;
@property (readonly, copy, nonatomic) NSString *suggestionKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 reason:(id)a3 reasonType:(id)a4;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handle:(id)a3 reason:(id)a4 reasonType:(id)a5;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 handles:(id)a2 reason:(id)a3 reasonType:(id)a4;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handles:(id)a3 reason:(id)a4 reasonType:(id)a5 useGroupsWhenFindingRecipient:(BOOL)a6;
- (id)initWithBundleID:(id)a0 interactionRecipients:(id)a1 contactID:(id)a2 handle:(id)a3 reason:(id)a4 reasonType:(id)a5 useGroupsWhenFindingRecipient:(BOOL)a6;

@end
