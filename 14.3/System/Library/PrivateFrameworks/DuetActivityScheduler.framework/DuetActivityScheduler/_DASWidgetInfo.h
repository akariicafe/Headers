@class NSString;

@interface _DASWidgetInfo : NSObject

@property (retain, nonatomic) NSString *widgetID;
@property (nonatomic) BOOL inStack;
@property (nonatomic) long long pageID;
@property (retain, nonatomic) NSString *extensionBundleID;
@property (nonatomic) double timeUntilContentExpiration;

- (void).cxx_destruct;

@end
