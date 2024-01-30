@class NSString;

@interface WFSpringBoardWebClipMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *shortcutIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL appIsInstalled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithShortcutIdentifier:(id)a0 applicationIdentifier:(id)a1 appIsInstalled:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
