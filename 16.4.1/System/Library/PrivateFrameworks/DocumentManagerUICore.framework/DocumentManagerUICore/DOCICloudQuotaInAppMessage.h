@class NSString, UIImage, NSArray;

@interface DOCICloudQuotaInAppMessage : NSObject

@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (id)contentTypeDescription;
- (unsigned long long)contentTypeWithMessage:(id)a0;
- (id)initWithContentType:(unsigned long long)a0 title:(id)a1 subTitle:(id)a2 icon:(id)a3 actions:(id)a4;
- (id)initWithICQInAppMessage:(id)a0;

@end
