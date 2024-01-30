@class UITargetedPreview;
@protocol NSCopying;

@interface UIContextMenuConfiguration : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (copy, nonatomic) id /* block */ previewProvider;
@property (copy, nonatomic) id /* block */ actionProvider;
@property (retain, nonatomic) UITargetedPreview *stashedClientProvidedPreview;
@property (retain, nonatomic) UITargetedPreview *stashedSourcePreview;

+ (id)configurationWithIdentifier:(id)a0 previewProvider:(id /* block */)a1 actionProvider:(id /* block */)a2;

- (void).cxx_destruct;

@end
