@class NSString, UIColor;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment>

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) long long messageAcknowledgmentType;
@property (readonly, nonatomic) UIColor *acknowledgmentImageColor;
@property (readonly, nonatomic) NSString *acknowledgmentImageName;
@property (readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property (readonly, nonatomic) UIColor *selectedBalloonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acknowledgmentBarColor;
+ (id)allMessageAcknowledgmentDescriptorsWithServiceName:(id)a0;

- (long long)themeColor;
- (void).cxx_destruct;
- (id)initWithMessageAcknowledgmentType:(long long)a0 serviceName:(id)a1;

@end
