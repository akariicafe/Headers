@class BCSLinkItemIdentifier;

@interface BCSChoppedItemIdentifierInfo : NSObject

@property (retain, nonatomic) BCSLinkItemIdentifier *itemIdentifier;
@property (nonatomic) long long chopID;

+ (id)newWithLinkItemIdentifier:(id)a0 chopID:(long long)a1;

- (void).cxx_destruct;

@end
