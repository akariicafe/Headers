@class NSString, NSArray, NSSet, TPPolicyVersion;

@interface TPSyncingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *model;
@property (readonly) TPPolicyVersion *version;
@property (readonly) NSArray *keyViewMapping;
@property (readonly) NSSet *viewList;
@property (readonly) NSSet *viewsToPiggybackTLKs;
@property (readonly) NSSet *userControllableViews;
@property (readonly) int syncUserControllableViews;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithModel:(id)a0 version:(id)a1 viewList:(id)a2 userControllableViews:(id)a3 syncUserControllableViews:(int)a4 viewsToPiggybackTLKs:(id)a5 keyViewMapping:(id)a6;
- (id)mapDictionaryToView:(id)a0;
- (BOOL)syncUserControllableViewsAsBoolean;
- (BOOL)isSyncingEnabledForView:(id)a0;

@end
