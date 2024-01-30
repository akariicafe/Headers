@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo, NSString;

@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (readonly, nonatomic) unsigned long long artworkSubtype;
@property (readonly, nonatomic) unsigned long long userInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContext;

- (id)initWithXPCDictionary:(id)a0;
- (id)_initWithDisplayContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayConfiguration:(id)a0 displayEdgeInfo:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithDisplayConfiguration:(id)a0;

@end
