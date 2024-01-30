@class NSString, NSAttributedString;

@interface HRFeatureRegulatoryUDIItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {
    NSString *_productName;
    long long _deviceType;
}

@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) long long cellAccessoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
