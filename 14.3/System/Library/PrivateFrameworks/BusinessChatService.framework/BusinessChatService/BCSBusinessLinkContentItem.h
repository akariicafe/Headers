@class NSString, BCSBusinessLinkContentItemModel;

@interface BCSBusinessLinkContentItem : NSObject <BCSBusinessLinkContentItemDescribing>

@property (readonly, nonatomic) BCSBusinessLinkContentItemModel *businessLinkContentItemModel;
@property (readonly, nonatomic, getter=isDefault) BOOL isDefault;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBusinessLinkContentItemModel:(id)a0;

@end
