@class NSArray, NSString;

@interface _PSAutocompleteSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSString *chatGuid;
@property (readonly, copy, nonatomic) NSArray *chatHandles;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned long long resultSourceType;

- (void).cxx_destruct;
- (id)initWithChatGuid:(id)a0 chatHandles:(id)a1 displayName:(id)a2 handle:(id)a3 contactIdentifier:(id)a4 resultSourceType:(unsigned long long)a5 autocompleteResult:(id)a6 recipients:(id)a7;
- (id)initWithChatGuid:(id)a0 displayName:(id)a1 handle:(id)a2 contactIdentifier:(id)a3 resultSourceType:(unsigned long long)a4 autocompleteResult:(id)a5;
- (id)initWithChatGuid:(id)a0 chatHandles:(id)a1 displayName:(id)a2 handle:(id)a3 contactIdentifier:(id)a4 resultSourceType:(unsigned long long)a5 autocompleteResult:(id)a6;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
