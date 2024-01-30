@class NSArray;

@interface WFSystemContentWhitelist : NSObject {
    NSArray *_whitelistItems;
}

+ (id)defaultSystemWhitelist;
+ (id)newWhitelistItemFromPlistEntry:(id)a0;

- (void)dealloc;
- (BOOL)isURLWhitelisted:(id)a0;
- (id)initWithWhitelistURL:(id)a0;

@end
