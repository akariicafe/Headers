@interface IDSIDInfoOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowRefresh;
@property (nonatomic) BOOL respectExpiry;
@property (nonatomic) BOOL waitForReply;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL bypassLimit;

+ (id)currentIDInfo;
+ (id)refreshIDInfo;
+ (id)refreshIDInfoAndBypassLimit;
+ (id)sync_currentIDInfo;
+ (id)sync_refreshIDInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithBypassLimit:(BOOL)a0 allowRefresh:(BOOL)a1 forceRefresh:(BOOL)a2 respectExpiry:(BOOL)a3 waitForReply:(BOOL)a4;

@end
