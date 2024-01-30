@class NSString, NSProgress, geo_isolater;

@interface GEOReportedProgress : NSObject {
    geo_isolater *_isolater;
    NSProgress *_internalProgress;
    id /* block */ _cancellationHandler;
}

@property (copy) NSString *kind;
@property long long totalUnitCount;
@property long long completedUnitCount;
@property (copy) id /* block */ cancellationHandler;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSProgress *progress;

+ (id)progressWithTotalUnitCount:(long long)a0;

- (void)cancel;
- (void)becomeCurrentWithPendingUnitCount:(long long)a0;
- (void).cxx_destruct;
- (void)resignCurrent;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)addChild:(id)a0 withPendingUnitCount:(long long)a1;
- (id)initWithTotalUnitCount:(long long)a0;

@end
