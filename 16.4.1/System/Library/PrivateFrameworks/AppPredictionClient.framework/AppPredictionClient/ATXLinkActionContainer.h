@class NSString, LNImage, LNAction;

@interface ATXLinkActionContainer : NSObject <ATXSuggestionExecutableProtocol, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) LNAction *action;
@property (retain, nonatomic) LNImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithBundleId:(id)a0 action:(id)a1 image:(id)a2;
- (id)initWithBundleId:(id)a0 action:(id)a1;
- (BOOL)isEqualToATXLinkActionContainer:(id)a0;

@end
