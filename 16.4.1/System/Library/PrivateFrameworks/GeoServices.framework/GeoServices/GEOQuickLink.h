@class NSString, GEOPDQuickLinkItem;

@interface GEOQuickLink : NSObject {
    GEOPDQuickLinkItem *_quickLinkItem;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithQuickLink:(id)a0;

@end
