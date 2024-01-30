@class NSUUID, NSString, NSURL, NSNumber;

@interface WBSWebExtensionContextMenuContext : NSObject

@property (readonly, nonatomic) BOOL shouldMatchAllVisibleItems;
@property (readonly, nonatomic) BOOL shouldCollapseMultipleTopLevelItems;
@property (readonly, nonatomic) long long topLevelItemLimit;
@property (readonly, nonatomic) NSUUID *extensionIdentifier;
@property (readonly, copy, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) double tabID;
@property (readonly, nonatomic) NSNumber *frameID;
@property (readonly, nonatomic, getter=isInSubframe) BOOL inSubframe;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) long long elementMediaType;
@property (readonly, nonatomic) NSURL *linkURL;
@property (readonly, nonatomic, getter=isLink) BOOL link;
@property (readonly, nonatomic) NSURL *srcURL;
@property (readonly, nonatomic) NSURL *pageURL;
@property (readonly, nonatomic) NSURL *frameURL;

+ (id)contextForActionContextMenuWithExtensionIdentifier:(id)a0 tabID:(double)a1;
+ (id)contextForBrowserActionContextMenuWithExtensionIdentifier:(id)a0 tabID:(double)a1;
+ (id)contextForPageActionContextMenuWithExtensionIdentifier:(id)a0 tabID:(double)a1;
+ (id)contextForWebContentContextMenuInTabID:(double)a0 frameID:(id)a1 mediaType:(long long)a2 linkURL:(id)a3 srcURL:(id)a4 pageURL:(id)a5 frameURL:(id)a6 isEditable:(BOOL)a7 selectedText:(id)a8;
+ (id)contextMatchingAllVisibleItems;

- (id)init;
- (void).cxx_destruct;

@end
