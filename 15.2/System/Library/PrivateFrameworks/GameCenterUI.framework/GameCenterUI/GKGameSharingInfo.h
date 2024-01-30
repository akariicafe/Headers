@class NSString, NSURL, UIImage;

@interface GKGameSharingInfo : NSObject

@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSString *developerName;
@property (retain, nonatomic) NSURL *viewItemURL;
@property (retain, nonatomic) NSURL *shortViewItemURL;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *emailSubject;
@property (retain, nonatomic) NSString *emailBody;
@property (nonatomic) BOOL complete;

- (void).cxx_destruct;
- (id)initWithGame:(id)a0;
- (id)operationThatBlocksUntilLoaded;
- (id)thumbnailForActivityType:(id)a0;
- (id)itemsForActivityType:(id)a0;
- (id)subjectForEmailActivity;

@end
