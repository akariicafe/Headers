@class WebBookmark, NSString, NSDictionary, NSURL, WBSCRDTPosition, WBLocalTabAttributes;

@interface WBTab : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) int parentIdentifier;
@property (readonly, nonatomic, getter=wasModified) BOOL modified;
@property (readonly, nonatomic, getter=wasAdded) BOOL added;
@property (readonly, nonatomic, getter=wasMoved) BOOL moved;
@property (readonly, nonatomic, getter=_isMutable) BOOL isMutable;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic) int orderIndex;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) WBLocalTabAttributes *localAttributes;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, copy, nonatomic) NSString *tabGroupUUID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL isBlank;
@property (readonly, nonatomic) BOOL isMarkedAsRead;
@property (readonly, copy, nonatomic) NSURL *syncableURL;
@property (readonly, nonatomic) BOOL canSetPinned;
@property (readonly, nonatomic, getter=isPinnable) BOOL pinnable;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, copy, nonatomic) NSString *pinnedTitle;
@property (readonly, copy, nonatomic) NSURL *pinnedURL;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)startPageTabWithDeviceIdentifier:(id)a0;
+ (id)pinnedTabWithTitle:(id)a0 url:(id)a1 deviceIdentifier:(id)a2;

- (id)initWithBookmark:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 deviceIdentifier:(id)a1 lastVisitTime:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)_setLocalURLString:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1 deviceIdentifier:(id)a2;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3 lastVisitTime:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isIdentical:(id)a0;
- (void)_updateBookmarkWithURL:(id)a0 shouldSync:(BOOL)a1;
- (id)initWithUUID:(id)a0 deviceIdentifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 pinned:(BOOL)a3 pinnedTitle:(id)a4 pinnedURL:(id)a5 localAttributes:(id)a6 deviceIdentifier:(id)a7;
- (id)_addressFromURL:(id)a0;
- (id)duplicate;
- (void).cxx_destruct;
- (BOOL)canCloseAutomaticallyForInterval:(double)a0;
- (id)mutableDuplicate;

@end
