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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)action;
- (id)description;
- (void).cxx_destruct;
- (void)setAction:(id)a0;
- (void)setTargetFrame:(id)a0;
- (id)targetFrame;
- (void)setTargetMode:(int)a0;
- (int)targetMode;
- (void)setTargetLocation:(id)a0;
- (id)targetLocation;
- (id)tooltip;
- (void)setTooltip:(id)a0;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)a0;

@end
