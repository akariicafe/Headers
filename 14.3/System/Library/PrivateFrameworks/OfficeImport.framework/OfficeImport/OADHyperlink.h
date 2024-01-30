@class NSURL, NSString;

@interface OADHyperlink : NSObject {
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
}

@property (nonatomic) BOOL doEndSound;
@property (nonatomic) BOOL isVisited;
@property (nonatomic) BOOL doAddToHistory;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)action;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setAction:(id)a0;
- (void)setTargetFrame:(id)a0;
- (id)targetFrame;
- (id)tooltip;
- (id)targetLocation;
- (int)targetMode;
- (void)setTargetLocation:(id)a0;
- (void)setTargetMode:(int)a0;
- (void)setTooltip:(id)a0;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)a0;

@end
