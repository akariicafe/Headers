@class MKImportContext;

@interface MKContext : NSObject

@property (retain, nonatomic) MKImportContext *application;
@property (retain, nonatomic) MKImportContext *account;
@property (retain, nonatomic) MKImportContext *message;
@property (retain, nonatomic) MKImportContext *contact;
@property (retain, nonatomic) MKImportContext *calendar;
@property (retain, nonatomic) MKImportContext *bookmark;
@property (retain, nonatomic) MKImportContext *file;
@property (retain, nonatomic) MKImportContext *image;
@property (retain, nonatomic) MKImportContext *video;
@property (retain, nonatomic) MKImportContext *album;
@property (retain, nonatomic) MKImportContext *container;
@property (retain, nonatomic) MKImportContext *accessibilitySetting;
@property (retain, nonatomic) MKImportContext *displaySetting;
@property (retain, nonatomic) MKImportContext *placeholder;

- (id)init;
- (void).cxx_destruct;

@end
