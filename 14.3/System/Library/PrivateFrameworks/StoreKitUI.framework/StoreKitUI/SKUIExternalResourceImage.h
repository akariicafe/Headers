@class NSString, NSBundle;

@interface SKUIExternalResourceImage : NSObject

@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic) BOOL alwaysTemplate;

- (void).cxx_destruct;

@end
