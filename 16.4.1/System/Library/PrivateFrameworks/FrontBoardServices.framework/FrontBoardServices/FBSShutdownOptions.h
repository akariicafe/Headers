@class NSString;
@protocol NSCopying;

@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying>

@property (nonatomic) long long LPEMOption;
@property (weak, nonatomic) id<NSCopying> localContext;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) long long rebootType;
@property (nonatomic) long long source;
@property (readonly, nonatomic) BOOL isShutdown;
@property (readonly, nonatomic) BOOL isReboot;
@property (readonly, nonatomic) BOOL isUserInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
