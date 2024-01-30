@class NSString, NSSet, NSURL;

@interface NPKTapToRadarRequest : NSObject {
    NSURL *_tapToRadarURL;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSSet *attachmentsPaths;
@property (readonly, nonatomic) NSURL *tapToRadarURL;

- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_attachmentURLs;
- (id)initWithTitle:(id)a0 body:(id)a1 attachmentPaths:(id)a2;

@end
