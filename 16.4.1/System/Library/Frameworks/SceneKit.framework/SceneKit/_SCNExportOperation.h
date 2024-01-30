@class SCNNode, NSDictionary, SCNScene, NSURL, NSError, SCNRenderer;

@interface _SCNExportOperation : SCNExportOperation {
    double _systemTime;
}

@property (nonatomic) id delegate;
@property (nonatomic) void *userInfo;
@property (nonatomic) SEL didEndSelector;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double progress;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL succeded;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long antialiasingMode;
@property (retain, nonatomic) SCNRenderer *renderer;

- (void)cancel;
- (void)dealloc;

@end
