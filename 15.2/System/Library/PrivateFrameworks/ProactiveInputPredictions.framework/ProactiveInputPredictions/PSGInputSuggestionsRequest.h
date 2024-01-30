@class NSArray, NSString, NSSet;

@interface PSGInputSuggestionsRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *responseKitConversationTurns;
@property (readonly, nonatomic) NSString *initiatingProcess;
@property (readonly, nonatomic) NSString *responseContext;
@property (readonly, nonatomic) NSArray *conversationTurns;
@property (readonly, nonatomic) NSString *adaptationContextID;
@property (readonly, nonatomic) BOOL shouldDisableAutoCaps;
@property (readonly, nonatomic) BOOL isResponseContextBlacklisted;
@property (readonly, nonatomic) NSString *contextBeforeInput;
@property (readonly, nonatomic) NSString *markedText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) NSString *contextAfterInput;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRangeInMarkedText;
@property (readonly, nonatomic) BOOL isDocumentEmpty;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) NSSet *availableApps;
@property (readonly, nonatomic) unsigned long long textualResponseLimit;
@property (readonly, nonatomic) unsigned long long structuredInfoLimit;
@property (readonly, nonatomic) unsigned long long totalSuggestionsLimit;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (id)initWithResponseContext:(id)a0 conversationTurns:(id)a1 responseKitConversationTurns:(id)a2 adaptationContextID:(id)a3 shouldDisableAutoCaps:(BOOL)a4 isResponseContextBlacklisted:(BOOL)a5 contextBeforeInput:(id)a6 markedText:(id)a7 selectedText:(id)a8 contextAfterInput:(id)a9 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 localeIdentifier:(id)a11 bundleIdentifier:(id)a12 recipients:(id)a13 recipientNames:(id)a14 textContentType:(id)a15 availableApps:(id)a16 textualResponseLimit:(unsigned long long)a17 structuredInfoLimit:(unsigned long long)a18 totalSuggestionsLimit:(unsigned long long)a19 initiatingProcess:(id)a20;
- (id)initWithResponseContext:(id)a0 conversationTurns:(id)a1 responseKitConversationTurns:(id)a2 adaptationContextID:(id)a3 shouldDisableAutoCaps:(BOOL)a4 isResponseContextBlacklisted:(BOOL)a5 contextBeforeInput:(id)a6 markedText:(id)a7 selectedText:(id)a8 contextAfterInput:(id)a9 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 localeIdentifier:(id)a11 bundleIdentifier:(id)a12 recipients:(id)a13 recipientNames:(id)a14 textContentType:(id)a15 availableApps:(id)a16 textualResponseLimit:(unsigned long long)a17 structuredInfoLimit:(unsigned long long)a18 totalSuggestionsLimit:(unsigned long long)a19;
- (id)initWithResponseContext:(id)a0 conversationTurns:(id)a1 adaptationContextID:(id)a2 shouldDisableAutoCaps:(BOOL)a3 isResponseContextBlacklisted:(BOOL)a4 contextBeforeInput:(id)a5 markedText:(id)a6 selectedText:(id)a7 contextAfterInput:(id)a8 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9 localeIdentifier:(id)a10 bundleIdentifier:(id)a11 recipients:(id)a12 textContentType:(id)a13 availableApps:(id)a14 textualResponseLimit:(unsigned long long)a15 structuredInfoLimit:(unsigned long long)a16;
- (id)initWithResponseContext:(id)a0 conversationTurns:(id)a1 adaptationContextID:(id)a2 shouldDisableAutoCaps:(BOOL)a3 isResponseContextBlacklisted:(BOOL)a4 contextBeforeInput:(id)a5 markedText:(id)a6 selectedText:(id)a7 contextAfterInput:(id)a8 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9 localeIdentifier:(id)a10 bundleIdentifier:(id)a11 recipients:(id)a12 recipientNames:(id)a13 textContentType:(id)a14 availableApps:(id)a15 textualResponseLimit:(unsigned long long)a16 structuredInfoLimit:(unsigned long long)a17 totalSuggestionsLimit:(unsigned long long)a18;

@end
