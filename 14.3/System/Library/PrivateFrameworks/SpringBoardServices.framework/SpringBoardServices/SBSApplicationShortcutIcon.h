@class NSString;

@interface SBSApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initForSubclass;

@end
