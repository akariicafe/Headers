@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _stateFlags;
    int _ratingRank;
    unsigned long long _installType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic, getter=isAlwaysAvailable) BOOL alwaysAvailable;
@property (readonly, nonatomic, getter=isDowngraded) BOOL downgraded;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)addStateFlag:(unsigned long long)a0;
- (id)initWithBundleIdentifier:(id)a0 stateFlags:(unsigned long long)a1 ratingRank:(int)a2 installType:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;

@end
