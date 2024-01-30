@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;

- (id)_stringDescriptorForFont:(id)a0;
- (id)legibilityLabelForTitle:(id)a0 forSuperview:(id)a1 font:(id)a2;
- (id)init;
- (void)clearAll;
- (id)_createLegibilityLabelWithTitle:(id)a0 font:(id)a1;
- (void).cxx_destruct;

@end
