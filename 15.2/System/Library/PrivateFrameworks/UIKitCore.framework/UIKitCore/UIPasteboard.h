@class UIColor, NSArray, NSString, NSURL, UIImage;

@interface UIPasteboard : NSObject

@property (class, readonly, nonatomic) UIPasteboard *generalPasteboard;

@property (readonly, copy, nonatomic) NSArray *availableTypes;
@property (readonly, nonatomic) long long _changeCountIgnoringPinningActivity;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) long long changeCount;
@property (copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) NSArray *pasteboardTypes;
@property (readonly, nonatomic) long long numberOfItems;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSArray *strings;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *URLs;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) BOOL hasStrings;
@property (readonly, nonatomic) BOOL hasURLs;
@property (readonly, nonatomic) BOOL hasImages;
@property (readonly, nonatomic) BOOL hasColors;

+ (void)_performAsDataOwnerForAction:(SEL)a0 responder:(id)a1 block:(id /* block */)a2;
+ (id)_pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)_pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)a0;
+ (id)pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)pasteboardWithUniqueName;
+ (void)_pinItemProviders:(id)a0 forPasteboardNamed:(id)a1 withExpirationDate:(id)a2;
+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)a0;
+ (void)_attemptAuthenticationWithMessage:(id)a0;
+ (void)_performAsDataOwner:(long long)a0 block:(id /* block */)a1;

- (void)setObjects:(id)a0;
- (BOOL)_hasStrings;
- (void)setName:(id)a0;
- (void)addItems:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0;
- (id)dataForPasteboardType:(id)a0;
- (void)setItems:(id)a0 options:(id)a1;
- (id)valueForPasteboardType:(id)a0;
- (void)setValue:(id)a0 forPasteboardType:(id)a1;
- (void)setData:(id)a0 forPasteboardType:(id)a1;
- (id)pasteboardTypesForItemSet:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0 inItemSet:(id)a1;
- (id)itemSetWithPasteboardTypes:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (void)setItemProviders:(id)a0 options:(id)a1;
- (void)setObjects:(id)a0 localOnly:(BOOL)a1 expirationDate:(id)a2;
- (void)setItemProviders:(id)a0 localOnly:(BOOL)a1 expirationDate:(id)a2;
- (void)setObjects:(id)a0 options:(id)a1;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)a0;
- (BOOL)canInstantiateObjectsOfClass:(Class)a0;
- (id)_detectedPasteboardTypesForTypes:(id)a0;
- (id)_detectedPasteboardTypeStringsForTypes:(id)a0;
- (void)detectPatternsForPatterns:(id)a0 completionHandler:(id /* block */)a1;
- (void)detectPatternsForPatterns:(id)a0 inItemSet:(id)a1 completionHandler:(id /* block */)a2;
- (void)detectValuesForPatterns:(id)a0 completionHandler:(id /* block */)a1;
- (void)detectValuesForPatterns:(id)a0 inItemSet:(id)a1 completionHandler:(id /* block */)a2;
- (void)setPersistent:(BOOL)a0;
- (void)_clearPinnedItemProviders;
- (void)_pinItemProviders:(id)a0 expirationDate:(id)a1;

@end
