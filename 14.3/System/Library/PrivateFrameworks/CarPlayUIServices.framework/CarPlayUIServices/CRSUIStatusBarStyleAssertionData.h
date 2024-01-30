@class NSString;

@interface CRSUIStatusBarStyleAssertionData : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) long long contrast;
@property (nonatomic, getter=isSiriPresentation) BOOL siriPresentation;

- (void).cxx_destruct;

@end
