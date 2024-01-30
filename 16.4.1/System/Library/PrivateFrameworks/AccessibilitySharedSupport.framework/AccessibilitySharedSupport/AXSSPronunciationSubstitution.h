@class NSString, NSSet;

@interface AXSSPronunciationSubstitution : NSObject

@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *replacementString;
@property (copy, nonatomic) NSString *phonemes;
@property (copy, nonatomic) NSSet *languages;
@property (copy, nonatomic) NSSet *voiceIds;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL ignoreCase;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
@property (nonatomic) BOOL appliesToAllApps;
@property (copy, nonatomic) NSSet *bundleIdentifiers;
@property (nonatomic) BOOL isUserSubstitution;

- (void).cxx_destruct;
- (BOOL)isEqualToSubstitution:(id)a0;

@end
