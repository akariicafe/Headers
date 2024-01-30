@class UIColor, NSString;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment>

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
+ (id)allMessageAcknowledgmentDescriptors;

- (long long)themeColor;
- (id)initWithMessageAcknowledgmentType:(long long)a0;

@end
