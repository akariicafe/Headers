@class LSBundleRecord, PRComplicationGalleryWidgetItem;

@interface PRComplicationGalleryItem : NSObject

@property (readonly, nonatomic) PRComplicationGalleryWidgetItem *widgetItem;
@property (readonly, nonatomic) LSBundleRecord *bundleRecord;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleRecord:(id)a0;
- (id)initWithWidgetItem:(id)a0;

@end
