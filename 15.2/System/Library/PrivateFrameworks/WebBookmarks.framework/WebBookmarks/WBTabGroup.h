@class NSString, NSArray, NSSet, NSDictionary, NSMutableArray, WebBookmark;

@interface WBTabGroup : NSObject <NSCopying, NSSecureCoding, WBSerializable> {
    NSMutableArray *_tabs;
    NSArray *_overflowRemoteTabs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (nonatomic) int identifier;
@property (readonly, copy, nonatomic) NSMutableArray *deletedTabs;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) id /* block */ displayTitleProvider;
@property (copy, nonatomic) NSString *lastSelectedTabUUID;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic) BOOL isPrivate;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSArray *allTabs;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) NSSet *tabsUUIDSet;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localTabGroup;
+ (id)privateTabGroup;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithBookmark:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isHidden;
- (void)clearTabs;
- (id)initWithBookmark:(id)a0 tabs:(id)a1 lastSelectedTabUUID:(id)a2;
- (id)tabWithUUID:(id)a0;
- (void)reorderTab:(id)a0 afterTab:(id)a1;
- (BOOL)isIdentical:(id)a0;
- (void)truncateToNumberOfTabs:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 uuid:(id)a1;
- (id)initWithBookmark:(id)a0 tabs:(id)a1 lastSelectedTabUUID:(id)a2 type:(long long)a3;
- (void)insertTabs:(id)a0 afterTab:(id)a1;
- (void)removeTabs:(id)a0;
- (BOOL)tabsAreIdentical:(id)a0;
- (void)appendTab:(id)a0;
- (void)appendTabs:(id)a0;
- (void)insertTab:(id)a0 afterTab:(id)a1;
- (void)removeTab:(id)a0;
- (void)updateTab:(id)a0;
- (void)clearDeletedTabs;
- (void)detectDuplicatedTabs;

@end
