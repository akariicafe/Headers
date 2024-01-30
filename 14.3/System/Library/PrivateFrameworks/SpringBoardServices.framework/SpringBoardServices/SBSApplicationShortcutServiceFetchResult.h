@class NSArray, NSString;

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying>

@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property (readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property (readonly, nonatomic) NSArray *composedApplicationShortcutItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStaticApplicationShortcutItems:(id)a0 dynamicApplicationShortcutItems:(id)a1 composedApplicationShortcutItems:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end
