@class NSString;

@interface ICAttachmentBrickInfo : NSObject

@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detail1String;
@property (copy, nonatomic) NSString *detail2String;
@property (nonatomic) BOOL titleLight;
@property (nonatomic) BOOL detail1Dark;

- (void).cxx_destruct;

@end
