@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;

- (id)legibilityLabelForTitle:(id)a0 forSuperview:(id)a1 font:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_createLegibilityLabelWithTitle:(id)a0 font:(id)a1;
- (void)clearAll;
- (id)_stringDescriptorForFont:(id)a0;

@end
