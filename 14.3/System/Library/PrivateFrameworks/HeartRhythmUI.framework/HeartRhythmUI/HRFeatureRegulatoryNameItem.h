@class NSString, NSAttributedString;
@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@interface HRFeatureRegulatoryNameItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {
    NSString *_featureName;
}

@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) long long cellAccessoryType;
@property (weak, nonatomic) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFeatureName:(id)a0;

@end
