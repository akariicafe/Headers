@class WebBookmark, NSString, WBTabGroup, NSURL, NSDictionary, WBLocalTabAttributes;

@interface WBTab : NSObject <NSCopying, NSSecureCoding, WBSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) int identifier;
@property (nonatomic, getter=wasModified) BOOL modified;
@property (nonatomic, getter=wasAdded) BOOL added;
@property (nonatomic, getter=wasMoved) BOOL moved;
@property (retain, nonatomic) WBLocalTabAttributes *localAttributes;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic) BOOL isPrivateTab;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (weak, nonatomic) WBTabGroup *tabGroup;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSURL *syncableURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBookmark:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (id)duplicate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markClean;
- (void)adoptAttributesFromTab:(id)a0;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2;
- (id)_addressFromURL:(id)a0;
- (BOOL)isIdentical:(id)a0;
- (void)didAddToTabGroup:(id)a0;
- (void)didRemoveFromTabGroup:(id)a0;

@end
