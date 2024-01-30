@class NSString, NSData, NSDate;

@interface AVTAvatarRecord : NSObject <UIActivityItemSource, AVTAvatarRecordInternal, NSSecureCoding, NSCopying, AVTAvatarRecord>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *avatarData;
@property (readonly, nonatomic) NSDate *orderDate;
@property (readonly, nonatomic, getter=isPuppet) BOOL puppet;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canLoadAvatarWithData:(id)a0;
+ (id)dataForNeutralRecord;
+ (id)dataForNewRecord;
+ (id /* block */)matchingIdentifierTest:(id)a0;
+ (id)defaultAvatarRecord;

- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)init;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)initWithAvatarData:(id)a0 orderDate:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithAvatarData:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAvatarData:(id)a0 identifier:(id)a1 orderDate:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
