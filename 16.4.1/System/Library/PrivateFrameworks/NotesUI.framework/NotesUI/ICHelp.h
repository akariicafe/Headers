@class NSURL;

@interface ICHelp : NSObject

@property (class, readonly, copy, nonatomic) NSURL *smartFoldersSupportURL;
@property (class, readonly, copy, nonatomic) NSURL *lockedNotesSupportURL;

+ (void)presentWithTopic:(id)a0 presentingViewController:(id)a1;

@end
