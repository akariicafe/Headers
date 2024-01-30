@class NSString, UIImage;
@protocol NTKCompanionAppDelegate;

@interface NTKCompanionApp : NSObject

@property (nonatomic) BOOL fetchingIcon;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *watchApplicationIdentifier;
@property (retain, nonatomic) NSString *containerApplicationIdentifier;
@property (weak, nonatomic) id<NTKCompanionAppDelegate> delegate;

- (void).cxx_destruct;
- (id)complication;

@end
