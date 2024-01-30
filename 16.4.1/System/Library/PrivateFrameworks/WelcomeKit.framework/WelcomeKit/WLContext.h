@class WLImportContext;

@interface WLContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) WLImportContext *application;
@property (retain, nonatomic) WLImportContext *account;
@property (retain, nonatomic) WLImportContext *message;
@property (retain, nonatomic) WLImportContext *contact;
@property (retain, nonatomic) WLImportContext *calendar;
@property (retain, nonatomic) WLImportContext *bookmark;
@property (retain, nonatomic) WLImportContext *file;
@property (retain, nonatomic) WLImportContext *image;
@property (retain, nonatomic) WLImportContext *video;
@property (retain, nonatomic) WLImportContext *album;
@property (retain, nonatomic) WLImportContext *container;
@property (retain, nonatomic) WLImportContext *accessibilitySetting;
@property (retain, nonatomic) WLImportContext *displaySetting;
@property (retain, nonatomic) WLImportContext *placeholder;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
