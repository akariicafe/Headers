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

- (void)setAction:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)targetFrame;
- (void)setTargetFrame:(id)a0;
- (unsigned long long)hash;
- (id)action;
- (id)tooltip;
- (int)targetMode;
- (void)setTargetMode:(int)a0;
- (id)targetLocation;
- (void)setTargetLocation:(id)a0;
- (void)setTooltip:(id)a0;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)a0;

@end
