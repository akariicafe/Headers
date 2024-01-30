@class NSString;

@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding>

@property (nonatomic, setter=_setAboveOtherContexts:) BOOL _aboveOtherContexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
